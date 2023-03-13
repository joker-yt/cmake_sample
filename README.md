# cmake_sample
![cmake_1.jpg](img/cmake_1.jpg)
![cmake_2.jpg](img/cmake_2.jpg)
![cmake_3.jpg](img/cmake_3.jpg)
![cmake_4.jpg](img/cmake_4.jpg)

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
