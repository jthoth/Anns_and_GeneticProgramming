cmake_minimum_required(VERSION 3.14)
project(GenneticProgramming)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)


add_executable(GenneticProgramming main.cpp src/Neuron.h Tests/LogicGatesTest.cpp src/LogicsGates/And.h src/LogicsGates/And.h  src/LogicsGates/Or.h src/LogicsGates/NAnd.h src/LogicsGates/Not.h)
target_link_libraries(GenneticProgramming gtest gtest_main)
