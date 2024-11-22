cmake_minimum_required(VERSION 3.28)
project(Inventario101)

set(CMAKE_CXX_STANDARD 17)

add_executable(Inventario101 main.cpp
        Inventory.cpp
        Inventory.h)
