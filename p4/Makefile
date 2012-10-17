Calc: calc.o dstack.o
	g++ -Wall -g -pedantic -o calc calc.o dstack.o

dstack.o: dstack.h dstack.cpp
	g++ -Wall -g -pedantic -c dstack.cpp

reverse.o: dstack.h calc.cpp
	g++ -Wall -g -pedantic -c calc.cpp

clean:
	rm -f calc calc.exe calc.o dstack.o
