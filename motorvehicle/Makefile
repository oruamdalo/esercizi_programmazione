TestMotorVehicle: TestMotorVehicle.o MotorVehicle.o
	g++ TestMotorVehicle.o MotorVehicle.o -o TestMotorVehicle
TestMotorVehicle.o: TestMotorVehicle.cpp
	g++ -c TestMotorVehicle.cpp --std=c++11 -Wall -pedantic -o TestMotorVehicle.o
MotorVehicle.o: MotorVehicle.cpp MotorVehicle.h
	g++ -c MotorVehicle.cpp --std=c++11 -Wall -pedantic -o MotorVehicle.o
