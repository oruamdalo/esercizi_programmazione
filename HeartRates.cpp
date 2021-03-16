#include <string>
#include "HeartRates.h"

// Implementations
HeartRates::HeartRates(std::string fname, std::string lname, Date date)
						:firstName(fname), lastName(lname), birthDate(date){
	// Empty Body
}

int HeartRates::calcAge(Date date){
	int year = date.getYear();
	return 2021 - year;
}

int HeartRates::getMaxRates(){
	return 220 - HeartRates::calcAge();
}

