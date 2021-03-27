CryptoTest: CryptoTest.o Crypto.o
	g++ CryptoTest.o Crypto.o -o CryptoTest
CryptoTest.o: CryptoTest.cpp
	g++ -c CryptoTest.cpp --std=c++11 -Wall -pedantic -o CryptoTest.o
Crypto.o: Crypto.cpp Crypto.h
	g++ -c Crypto.cpp --std=c++11 -Wall -pedantic -o Crypto.o
