cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(226_InvertBinaryTree VERSION 1.0.0)

set(SRC_FILES src/solution.cpp src/node.cpp)
add_executable(226_InvertBinaryTree src/main.cpp ${SRC_FILES})

target_include_directories(226_InvertBinaryTree PUBLIC inc)

