cmake_minimum_required(VERSION 3.16)
project(digital_temple)

set(CMAKE_CXX_STANDARD 17)

include_directories(quantum/include)

add_executable(simple_clustering
    examples/simple_clustering.cpp
    quantum/src/DataEncoder.cpp
    quantum/src/VariationalAnsatz.cpp
)