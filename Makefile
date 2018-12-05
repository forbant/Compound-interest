output: main.o bank.o
	g++ main.o bank.o -o ./out/main
main.o: main.cpp
	g++ -c main.cpp
bank.o: bank.h bank.cpp
	g++ -c bank.cpp
clean:
	rm ./out/*