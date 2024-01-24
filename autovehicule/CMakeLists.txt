cmake_minimum_required(VERSION 3.26)
project(autovehicule)

set(CMAKE_CXX_STANDARD 17)

add_executable(autovehicule main.cpp
        Autovehicul.h
        Autovehicul.cpp
        Autoturism.cpp
        Autoturism.h
        TransportPersoane.cpp
        TransportPersoane.h)
