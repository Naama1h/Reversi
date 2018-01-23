cmake_minimum_required(VERSION 3.8)
project(ex3)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -pthread)
add_subdirectory(src/client/lib/googletest-release-1.8.0)
include_directories(src/client/lib/googletest-release-1.8.0/googletest/include)
include_directories(src/client/lib/googletest-release-1.8.0/googlemock/include)

set(SOURCE_FILES src/client/main.cpp src/client/BoardConsole.cpp src/client/BoardConsole.h src/client/Player.h src/client/PersonP.cpp src/client/PersonP.h src/client/Logic.h src/client/StandartLogic.cpp src/client/StandartLogic.h src/client/Point.cpp src/client/Point.h src/client/Board.h src/client/Game.cpp src/client/Game.h src/client/AIPlayer.cpp src/client/AIPlayer.h src/client/tests/Board_test.cpp src/client/tests/Board_test.h src/client/tests/StandartLogic_test.cpp src/client/tests/StandartLogic_test.h src/client/tests/AIPlayer_test.cpp src/client/tests/AIPlayer_test.h src/client/tests/PersonP_teset.cpp src/client/tests/PersonP_teset.h src/client/PrintMassage.h src/client/PrintConsole.h src/client/Client.cpp src/client/Client.h src/client/RemotePlayer.cpp src/client/RemotePlayer.h src/client/PersonPServer.cpp src/client/PersonPServer.h src/client/Menu.h src/client/MenuConsole.cpp src/client/MenuConsole.h src/client/PrintConsole.cpp)
add_executable(ex3 ${SOURCE_FILES} src/client/main.cpp)

set(SERVER_FILES src/server/main.cpp src/server/Server.cpp src/server/Server.h src/server/ClientManager.cpp src/server/ClientManager.h src/server/Command.h src/server/JoinCommand.cpp src/server/JoinCommand.h src/server/StartCommand.cpp src/server/StartCommand.h src/server/ListGamesCommand.cpp src/server/ListGamesCommand.h src/server/PlayCommand.cpp src/server/PlayCommand.h src/server/CloseCommand.cpp src/server/CloseCommand.h src/server/GameMembers.cpp src/server/GameMembers.h src/server/ThreadPool.cpp src/server/ThreadPool.h src/server/Task.cpp src/server/Task.h)
add_executable(server ${SERVER_FILES} src/server/main.cpp src/server/ThreadPool.cpp src/server/ThreadPool.h)

set(TESTS_FILES src/client/BoardConsole.cpp src/client/BoardConsole.h src/client/Player.h src/client/PersonP.cpp src/client/PersonP.h src/client/Logic.h src/client/StandartLogic.cpp src/client/StandartLogic.h src/client/Point.cpp src/client/Point.h src/client/Board.h src/client/Game.cpp src/client/Game.h src/client/AIPlayer.cpp src/client/AIPlayer.h src/client/tests/Board_test.cpp src/client/tests/Board_test.h src/client/tests/StandartLogic_test.cpp src/client/tests/StandartLogic_test.h src/client/tests/AIPlayer_test.cpp src/client/tests/AIPlayer_test.h src/client/tests/PersonP_teset.cpp src/client/tests/PersonP_teset.h src/client/PrintMassage.h src/client/PrintConsole.h src/client/Client.cpp src/client/Client.h src/client/RemotePlayer.cpp src/client/RemotePlayer.h src/client/PersonPServer.cpp src/client/PersonPServer.h src/client/Menu.h src/client/MenuConsole.cpp src/client/MenuConsole.h src/client/tests/gtest_main.cpp)
add_executable(tests ${TESTS_FILES} src/client/tests/gtest_main.cpp)
target_link_libraries(ex3 gtest gtest_main gmock)
#target_link_libraries(tests gtest gtest_main gmock)