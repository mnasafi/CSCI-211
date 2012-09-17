#makefile for lab 4

#final output
videos: video.o main.o
	g++ -Wall -pedantic -g -o videos video.o main.o

#file 1
main.o: main.cpp video.h
	g++ -Wall -pedantic -g -c main.cpp

#file 2
video.o: video.cpp video.h
	g++ -Wall -pedantic -g -c video.cpp 

#clean .o files
clean:
	rm -f main.o video.o

