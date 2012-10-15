reverse: reverse.o dstack.o
	g++ -Wall -pedantic -g -o reverse reverse.o dstack.o

dstack.o: dstack.h dstack.cpp
	g++ -Wall -pedantic -g -c dstack.cpp

reverse.o: dstack.h reverse.cpp
	g++ -Wall -pedantic -g -c reverse.cpp

clean:
	rm -f reverse reverse.exe reverse.o dstack.o
