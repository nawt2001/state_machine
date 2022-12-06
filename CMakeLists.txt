cmake_minimum_required(VERSION 3.22)
project(state_machine)

set(CMAKE_CXX_STANDARD 20)

add_executable(state_machine main.cpp state.cpp state.h iAction.h iTransitions.h Actions/LedOn.cpp Actions/LedOn.h Actions/print3.cpp Actions/print3.h Actions/print2.cpp Actions/print2.h Actions/print1.cpp Actions/print1.h)
