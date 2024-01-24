cmake_minimum_required(VERSION 3.26)
project(tema8)

set(CMAKE_CXX_STANDARD 17)

add_executable(tema8 main.cpp
        product/Product.h
        grocery/Grocery.cpp
        grocery/Grocery.h
        cosmetic/Cosmetic.cpp
        cosmetic/Cosmetic.h
        drink/Drink.cpp
        drink/Drink.h
        supermarket/Supermarket.cpp
        supermarket/Supermarket.h
        product/Product.cpp)
