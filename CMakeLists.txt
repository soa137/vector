cmake_minimum_required(VERSION 3.16)
project(
    vector
    VERSION 1.0
    DESCRIPTION "Vector3D"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

add_executable(vector)


set(sources
    src/vector3D.h
    src/vector3D.cpp
    src/vector3D_.h
    src/vector3D_.cpp
    src/main.cpp
)

target_sources(vector PRIVATE ${sources})