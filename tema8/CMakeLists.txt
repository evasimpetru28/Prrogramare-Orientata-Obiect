cmake_minimum_required(VERSION 3.26)
project(tema8)

set(CMAKE_CXX_STANDARD 17)

add_executable(tema8 main.cpp
        Product.h
        Grocery.cpp
        Grocery.h
        Cosmetic.cpp
        Cosmetic.h
        Drink.cpp
        Drink.h
        Supermarket.cpp
        Supermarket.h
        Product.cpp)
