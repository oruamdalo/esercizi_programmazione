#include <string>
#include "MotorVehicle.h"

MotorVehicle::MotorVehicle(std::string make, std::string feulType, std::string color) : make(make), feulType(feulType), color(color){
	// Empty body
}

// Getters
std::string MotorVehicle::getMake(){ return make; }
std::string MotorVehicle::getFeulType(){ return feulType; }
std::string MotorVehicle::getColor(){ return color; }
int MotorVehicle::getYear(){ return yearOfManufacture; }
int MotorVehicle::getCapacity(){ return engineCapacity; }

// Setters

void MotorVehicle::setMake(std::string make){ make = make; }
void MotorVehicle::setFeulType(std::string feulType){ feulType = feulType; }
void MotorVehicle::setColor(std::string color){ color = color; }
void MotorVehicle::setYear(int year){ yearOfManufacture = year; }
void MotorVehicle::setCapacity(int cap){ engineCapacity = cap; }


