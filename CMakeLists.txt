cmake_minimum_required(VERSION 3.8)
project(ex3)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp BoardConsole.cpp BoardConsole.h Player.h PersonP.cpp PersonP.h Logic.h StandartLogic.cpp StandartLogic.h Point.cpp Point.h Board.h Game.cpp Game.h)
add_executable(ex3 ${SOURCE_FILES})