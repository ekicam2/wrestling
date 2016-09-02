cmake_minimum_required (VERSION 2.6)
project (WrestlingGame)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -lsfml-graphics -lsfml-window -lsfml-system")
add_executable(../Game ../main.cpp ../Menu.cpp ../Level.cpp ../Player.cpp ../Animation.cpp)
