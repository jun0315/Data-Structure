cmake_minimum_required(VERSION 3.13)
project(BsTree)

set(CMAKE_CXX_STANDARD 14)

add_executable(Solution.cpp Solution.h BSTree main.cpp BSTree.cpp BsTree.h)