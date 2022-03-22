lab07: main.o Blob.o BlobSpreader.o
	g++ -std=c++11 -g -Wall main.o Blob.o BlobSpreader.o -o lab07

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp


BlobSpreader.o: BlobSpreader.cpp BlobSpreader.h
	g++ -std=c++11 -g -Wall -c BlobSpreader.cpp

Blob.o: Blob.cpp Blob.h
	g++ -std=c++11 -g -Wall -c Blob.cpp

clean:
	rm *.o lab07
