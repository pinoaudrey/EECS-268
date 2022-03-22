Prog: main.o Executive.o Circle.o Rectangle.o Triangle.o ShapeContainer.o
	g++ -std=c++11 -g -Wall main.o Executive.o Circle.o Rectangle.o Triangle.o ShapeContainer.o -o Prog

main.o: main.cpp Executive.h Circle.h Rectangle.h Triangle.h ShapeContainer.o
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

Circle.o: Circle.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

Rectangle.o: Rectangle.h Rectangle.cpp
	g++ -std=c++11 -g -Wall -c Rectangle.cpp

Triangle.o: Triangle.h Triangle.cpp
	g++ -std=c++11 -g -Wall -c Triangle.cpp

ShapeContainer.o: ShapeContainer.h ShapeContainer.cpp
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp

clean: 
	rm *.o Prog
