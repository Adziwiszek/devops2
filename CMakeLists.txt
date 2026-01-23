cmake_minimum_required(VERSION 3.16)
project(calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# lib & app
add_subdirectory(src)
# tests
add_subdirectory(tests)
