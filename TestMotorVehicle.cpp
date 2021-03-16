#include <iostream>
#include "MotorVehicle.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
	MotorVehicle civic{"Honda", "Benzina", "Grigio"};

	cout << "Veicolo impostato\n";
	cout << "Make: " << civic.getMake() << endl;
	cout << "FeulType:" << civic.getFeulType() << endl;
	cout << "Color: " << civic.getColor() << endl;

	return 0;
}
