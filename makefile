all: main

main: main.o Class.o
	g++ -o main Class.o main.o

main.o: main.cpp
	g++ -c -g -Wall main.cpp

Class.o: Class.cpp
	g++ -c -g -Wall Class.cpp

clean:
	rm main main.o Class.o