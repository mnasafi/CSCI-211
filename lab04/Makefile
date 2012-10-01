#Ace Elberling
#elberling
#makefile for lab 4

#final output
foobar: foo.o main.o bar.o
	g++ -Wall -pedantic -g -o foobar foo.o main.o bar.o

#file 1
main.o: main.cpp
	g++ -Wall -pedantic -g -c main.cpp

#file 2
foo.o: foo.cpp
	g++ -Wall -pedantic -g -c foo.cpp 

#file 3
bar.o: bar.cpp
	g++ -Wall -pedantic -g -c bar.cpp

#clean .o files
clean:
	rm -f main.o foo.o bar.o

