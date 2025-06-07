cmake_minimum_required(VERSION 3.28.3)
project(concrete)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp)

add_library(func STATIC ${CMAKE_CURRENT_SOURCE_DIR}/func.cpp)

target_link_libraries(main func)

target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(func PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
