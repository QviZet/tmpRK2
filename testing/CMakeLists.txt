cmake_minimum_required(VERSION 3.28.3)
project(testing)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()

add_executable(testing tests.cpp)

target_link_libraries(testing func gtest gmock)

add_test(test testing)
