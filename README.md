# cmake_sample
```
> cd lib
> cmake -S . -B build -DCMAKE_INSTALL_PREFIX=./build/install
> cmake --build build
> cmake --install build

> cd ../app
> cmake -S . -B build -DCMAKE_INSTALL_PREFIX=./build/install
> cmake --build build
> cmake --install build
```