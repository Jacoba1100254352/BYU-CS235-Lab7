cmake_minimum_required(VERSION 3.19)
project(BST_Lab)

set(CMAKE_CXX_STANDARD 14)

add_executable(BST_Lab main.cpp BST.h BSTInterface.h NodeTree.h NodeInterface.h)
