cmake_minimum_required(VERSION 3.25)
project(Battleship)

set(CMAKE_CXX_STANDARD 17)

add_executable(Battleship main.cpp
        cpp/Ship.cpp
        header/Ship.h
        cpp/Case.cpp
        header/Case.h
        cpp/Player.cpp
        header/Player.h
        cpp/Game.cpp
        header/Game.h header/Game.h cpp/Location.cpp header/Location.h)
