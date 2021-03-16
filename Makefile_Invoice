TestInvoice: TestInvoice.o Invoice.o
	g++ TestInvoice.o Invoice.o -o TestInvoice

TestInvoice.o: TestInvoice.cpp
	g++ -c TestInvoice.cpp -Wall -pedantic -o TestInvoice.o

Invoice.o: Invoice.cpp Invoice.h
	g++ -c Invoice.cpp --std=c++11 -Wall -pedantic -o Invoice.o
