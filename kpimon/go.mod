module example.com/kpimon

go 1.17

//replace example.com/greetings => ../greetings

replace gerrit.o-ran-sc.org/r/ric-plt/sdlgo => ./sdlgo

replace gerrit.o-ran-sc.org/r/ric-plt/xapp-frame => ./xapp-frame

require gerrit.o-ran-sc.org/r/ric-plt/sdlgo v0.0.0-00010101000000-000000000000

require (
	github.com/go-redis/redis v6.15.9+incompatible // indirect
	github.com/onsi/ginkgo v1.16.4 // indirect
	github.com/onsi/gomega v1.16.0 // indirect
	github.com/stretchr/objx v0.3.0 // indirect
	github.com/stretchr/testify v1.5.1 // indirect
	golang.org/x/sys v0.0.0-20211019181941-9d821ace8654 // indirect
)
