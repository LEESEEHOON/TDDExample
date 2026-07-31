cmake_minimum_required(VERSION 3.16)
project(TDDExample LANGUAGES C CXX)

enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(mathlib STATIC
    src/math.cpp
)

add_library(mathclib STATIC
    src/math_c.c
)

target_include_directories(mathlib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(mathclib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(app
    src/main.cpp
)

target_link_libraries(app PRIVATE mathlib)

find_package(GTest REQUIRED)

add_executable(tests
    test/test_math.cpp
    test/test_gtest_example.cpp
    test/test_math_c.cpp
)

target_link_libraries(tests PRIVATE mathlib mathclib GTest::gtest_main)

target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

include(GoogleTest)
gtest_discover_tests(tests)
