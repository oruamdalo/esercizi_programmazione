Driver: Driver.o List.o Page.o
	g++ Driver.o List.o Page.o --std=c++11 -o Driver
Driver.o: Driver.cpp List.h
	g++ -c Driver.cpp --std=c++11 -Wall -pedantic
List.o: List.cpp List.h Node.h
	g++ -c List.cpp --std=c++11 -Wall -pedantic -o List.o
Page.o: Page.cpp Page.h
	g++ -c Page.cpp --std=c++11 -Wall -pedantic -o Page.o