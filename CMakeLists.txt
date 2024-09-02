cmake_minimum_required(VERSION 3.28)
project(sorting_algorithms)

set(CMAKE_CXX_STANDARD 23)

add_executable(sorting_algorithms main.cpp
        algorithms/SelectionSort/Selection.cpp
        algorithms/SelectionSort/Selection.h
        algorithms/BubbleSort/Bubble.cpp
        algorithms/BubbleSort/Bubble.h
        algorithms/SortAlgorithm.cpp
        algorithms/SortAlgorithm.h)
