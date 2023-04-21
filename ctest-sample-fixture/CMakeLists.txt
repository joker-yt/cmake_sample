set (TARGET my-ctest)
cmake_minimum_required(VERSION 3.22)

enable_testing()

# Point 1
find_package(GTest REQUIRED)

# Point 2
include(GoogleTest)

add_executable(${TARGET})
target_sources(${TARGET}
    PRIVATE test_myclass.cpp)

target_link_libraries(${TARGET} GTest::GTest GTest::Main)

# Point 3
gtest_add_tests(TARGET ${TARGET})