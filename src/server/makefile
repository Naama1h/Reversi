
a.out: compileAll
	g++ *.o -o ../../exe/server.out
	rm -f *.o

compileAll: *.h *.cpp
	g++ -c *.cpp -pthread
run:
	./a.out

