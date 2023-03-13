project(libproject)
set(TARGET my-foo)

cmake_minimum_required(VERSION 3.22)

set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

add_library(${TARGET} SHARED)

target_sources(${TARGET} PRIVATE foo.cpp)
target_include_directories(${TARGET} PRIVATE
        ${CMAKE_INSTALL_PREFIX}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(${TARGET} PROPERTIES PUBLIC_HEADER include/foo/foo.h)

install(TARGETS ${TARGET}
        EXPORT foo-export
        LIBRARY DESTINATION lib
        INCLUDES DESTINATION include
        PUBLIC_HEADER DESTINATION include/foo
        )

install(EXPORT foo-export
        FILE foo-config.cmake
        DESTINATION share/cmake/foo/
        EXPORT_LINK_INTERFACE_LIBRARIES)