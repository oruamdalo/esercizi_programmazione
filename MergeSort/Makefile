Driver: Driver.o MergeSort.o
	g++ Driver.o MergeSort.o -o Driver
Driver.o: Driver.cpp MergeSort.h
	g++ -c Driver.cpp --std=c++11 -Wall -pedantic -o Driver.o
MergeSort.o: MergeSort.cpp MergeSort.h
	g++ -c MergeSort.cpp --std=c++11 -Wall -pedantic -o MergeSort.o