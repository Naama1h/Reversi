# Naama Harshoshanim
# 315783217
a.out: BoardConsole.o Board.h Game.o Logic.h PersonP.o Player.h Point.o StandartLogic.o ALPlayer.o main.o
	g++ BoardConsole.o Board.h Game.o Logic.h PersonP.o Player.h Point.o StandartLogic.o ALPlayer.o main.o
BoardConsole.o: BoardConsole.cpp BoardConsole.h
	g++ -c BoardConsole.cpp
Game.o: Game.cpp Game.h
	g++ -c Game.cpp
PersonP: PersonP.cpp PersonP.h
	g++ -c PersonP.cpp
ALPlayer.o: ALPlayer.cpp ALPlayer.h
	g++ -c ALPlayer.cpp
Point.o: Point.cpp Point.h
	g++ -c Point.cpp
StandartLogic.o: StandartLogic.cpp StandartLogic.h
	g++ -c StandartLogic.cpp
main.o: main.cpp BoardConsole.h
	g++ -c main.cpp
