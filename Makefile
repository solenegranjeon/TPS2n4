all: main

main: main.o Polynome.o
	g++ main.o Polynome.o -o main -g
	
main.o: main.cpp Polynome.h
	g++ -c main.cpp -o main.o -std=c++11 -g
	
Polynome.o: Polynome.cpp Polynome.h
	g++ -c Polynome.cpp -o Polynome.o -std=c++11 -g
	
clean:
	rm *.o

