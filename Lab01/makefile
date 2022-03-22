prog: main.o Executive.o BoardGame.o
	g++ -std=c++11 -g -Wall main.o Executive.o BoardGame.o -o prog

main.o: main.cpp Executive.h BoardGame.h
	g++ -std=c++11 -g -Wall -c main.cpp


Executive.o: Executive.cpp Executive.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

			
BoardGame.o: BoardGame.cpp BoardGame.h
	g++ -std=c++11 -g -Wall -c BoardGame.cpp

clean: 
	rm *.o prog
