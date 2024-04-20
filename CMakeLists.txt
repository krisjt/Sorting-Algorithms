cmake_minimum_required(VERSION 3.23)
project(AIZO1)

set(CMAKE_CXX_STANDARD 17)

add_executable(AIZO1
        sorters/insertionSort/insertionSort.cpp
        sorters/quickSort/quickSort.cpp
        sorters/shellSort/shellSort.cpp
        sorters/heapSort/heapSort.cpp
        service/correctionTest/correctionTest.cpp
        service/quickSortDescending/quickSortDescending.cpp
        service/fileHandler/plik.cpp
        service/arrayGenerator/arrayGenerator.cpp
        sorters/quickSort/quickSortCall.cpp
        sorters/insertionSort/insertionSortCall.cpp
        sorters/heapSort/heapSortCall.cpp
        sorters/shellSort/shellSortCall.cpp
        service/fileLoader.cpp
        service/main.cpp)
