output: sources/hi-lo.o sources/game.o
	g++ sources/hi-lo.o sources/game.o -o hi-lo.exe

hi-lo.o: sources/hi-lo.cpp
	g++ -c sources/hi-lo.cpp

game.o: sources/game.cpp headers/game.h
	g++ -c sources/game.cpp

clean:
	rm sources/*.o 