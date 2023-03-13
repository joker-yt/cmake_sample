project(appproject)
set(TARGET my-app)

cmake_minimum_required(VERSION 3.22)

add_executable(${TARGET})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_INSTALL_PREFIX}/share/cmake)
find_package(foo REQUIRED) # not "foo-config"

target_sources(${TARGET}
    PRIVATE main.cpp
)

target_include_directories(${TARGET} PRIVATE
    ${CMAKE_INSTALL_PREFIX}/include
)

target_link_directories(${TARGET} PRIVATE
    ${CMAKE_INSTALL_PREFIX}/lib
)

target_link_libraries(${TARGET} my-foo)

install(TARGETS ${TARGET}
        RUNTIME DESTINATION bin)
