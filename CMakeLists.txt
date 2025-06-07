cmake_minimum_required(VERSION 3.28.3)
project(rk2)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(prototype)
add_subdirectory(testing)
add_subdirectory(googletest)

set(CPACK_PACKAGE_NAME "prototype")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "QviZet")
set(CPACK_GENERATOR DEB)
include(CPack)
