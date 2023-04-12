# cmake_sample
![cmake_1.jpg](img/cmake_1.jpg)
![cmake_2.jpg](img/cmake_2.jpg)
![cmake_3.jpg](img/cmake_3.jpg)
![cmake_4.jpg](img/cmake_4.jpg)
![cmake_5.jpg](img/cmake_5.jpg)
# to do
```
- CMAKE_FIND_ROOT_PATH
- BUILD_INTERFACE, INSTALL_INTERFACE
target_include_directories(${TARGET}
    PUBLIC  $<BUILD_INTERFACE: ${CMAKE_CURRENT_SOURCE_DIR}/include/my-lib>
            $<INSTALL_INTERFACE: include/my-lib> # = <install prefix>/include/my-lib
)
```


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
