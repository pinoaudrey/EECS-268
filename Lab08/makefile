prog: main.o
	g++ -g -std=c++11 -Wall main.o -o prog

main.o: main.cpp Stack.h Queue.h LinkedList.h Node.h StackInterface.h QueueInterface.h ListInterface.h
	g++ -g -std=c++11 -Wall -c main.cpp

clean:
	rm *.o prog
