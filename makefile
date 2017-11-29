a.out: PrintConsole.o PrintMassage.h BoardConsole.o Board.h Game.o Logic.h PersonP.o Player.h Point.o StandartLogic.o AIPlayer.o main.o
	g++ PrintConsole.o PrintMassage.h BoardConsole.o Board.h Game.o Logic.h PersonP.o Player.h Point.o StandartLogic.o AIPlayer.o main.o
BoardConsole.o: BoardConsole.cpp BoardConsole.h
	g++ -c BoardConsole.cpp
Game.o: Game.cpp Game.h
	g++ -c Game.cpp
PersonP: PersonP.cpp PersonP.h
	g++ -c PersonP.cpp
AIPlayer.o: AIPlayer.cpp AIPlayer.h
	g++ -c AIPlayer.cpp
Point.o: Point.cpp Point.h
	g++ -c Point.cpp
StandartLogic.o: StandartLogic.cpp StandartLogic.h
	g++ -c StandartLogic.cpp
PrintConsole.o: PrintConsole.cpp PrintConsole.h
	g++ -c PrintConsole.cpp
main.o: main.cpp BoardConsole.h
	g++ -c main.cpp
