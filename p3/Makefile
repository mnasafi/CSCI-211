# Makefile for 211 p3 assignment
vlist: video.o main.o vlist.o
	g++ -Wall -pedantic -g -o vlist video.o main.o vlist.o

main.o: main.cpp video.h vlist.h
	g++ -Wall -pedantic -g -c main.cpp

video.o: video.h video.cpp
	g++ -Wall -pedantic -g -c video.cpp

vlist.o: vlist.h vlist.cpp
	g++ -Wall -pedantic -g -c vlist.cpp

clean:
	rm -f video.o main.o vlist.o vlist vlist.exe
