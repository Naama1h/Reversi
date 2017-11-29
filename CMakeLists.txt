cmake_minimum_required(VERSION 3.8)
project(ex3)

set(CMAKE_CXX_STANDARD 98)
add_subdirectory(lib/googletest-release-1.8.0)
include_directories(lib/googletest-release-1.8.0/googletest/include)
include_directories(lib/googletest-release-1.8.0/googlemock/include)

set(SOURCE_FILES main.cpp BoardConsole.cpp BoardConsole.h Player.h PersonP.cpp PersonP.h Logic.h StandartLogic.cpp StandartLogic.h Point.cpp Point.h Board.h Game.cpp Game.h AIPlayer.cpp AIPlayer.h tests/Board_test.cpp tests/Board_test.h tests/StandartLogic_test.cpp tests/StandartLogic_test.h tests/AIPlayer_test.cpp tests/AIPlayer_test.h tests/PersonP_teset.cpp tests/PersonP_teset.h PrintMassage.h PrintConsole.cpp PrintConsole.h)
add_executable(ex3 ${SOURCE_FILES})

#set(SOURCE_FILES BoardConsole.cpp BoardConsole.h Player.h PersonP.cpp PersonP.h Logic.h StandartLogic.cpp StandartLogic.h Point.cpp Point.h Board.h Game.cpp Game.h ALPlayer.cpp ALPlayer.h tests/Board_test.cpp tests/Board_test.h tests/StandartLogic_test.cpp tests/StandartLogic_test.h tests/ALPlayer_test.cpp tests/ALPlayer_test.h tests/PersonP_teset.cpp tests/PersonP_teset.h tests/gtest_main.cpp)
#add_executable(ex3 ${SOURCE_FILES} tests/Board_test.cpp tests/gtest_main.cpp)
target_link_libraries(ex3 gtest gtest_main gmock)