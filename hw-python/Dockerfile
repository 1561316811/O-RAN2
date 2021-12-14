# ==================================================================================
#   Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#          http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
# ==================================================================================
FROM python:3.8-alpine
# copy rmr libraries from builder image in lieu of an Alpine package
COPY --from=nexus3.o-ran-sc.org:10002/o-ran-sc/bldr-alpine3-rmr:4.0.5 /usr/local/lib64/librmr* /usr/local/lib64/
# RMR setup
RUN mkdir -p /opt/route/
COPY init/test_route.rt /opt/route/find
ENV LD_LIBRARY_PATH=/usr/local/lib/:/usr/local/lib64
ENV RMR_SEED_RT=/opt/route/test_route.rt

#添加镜像源
RUN echo -e "http://mirrors.ustc.edu.cn/alpine/v3.14/main\nhttp://mirrors.ustc.edu.cn/alpine/v3.14/community" > /etc/apk/repositories

# sdl needs gcc
RUN apk update && apk add gcc musl-dev bash

# Install
COPY setup.py /tmp
COPY README.md /tmp
COPY LICENSE.txt /tmp/
COPY src/ /tmp/src
COPY init/ /tmp/init
COPY requirements.txt /tmp/requirements.txt 
RUN pip install -r /tmp/requirements.txt -i https://pypi.tuna.tsinghua.edu.cn/simple

# Env - TODO- Configmap
ENV PYTHONUNBUFFERED=1
ENV CONFIG_FILE=/tmp/init/config-file.json

# For Default DB connection, modify for resp kubernetes env
ENV DBAAS_SERVICE_PORT=6379
#ENV DBAAS_SERVICE_HOST=10.244.0.30
ENV DBAAS_SERVICE_HOST=service-ricplt-dbaas-tcp.ricplt.svc.cluster.local

#Run
ENTRYPOINT python /tmp/src/main.py
#CMD run-hw-python.py
