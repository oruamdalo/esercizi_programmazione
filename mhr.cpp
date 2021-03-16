#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int age{0};
	int hr1, hr2, hr3; // To complete this -> hr4;
	int min, max;

	cout << "Inserisci eta\'" << endl;	
	cin >> age;
	
	// Common MHR
	hr1 = 220 - age;
	cout << "Common MHR formula: " << hr1 << endl;
	min = hr1;
	max = hr1;

	// Tanaka MHR
	hr2 = 208 - 0.7*age;
	cout << "Tanaka MHR formula: " << hr2 << endl;

	if (hr2 > max){
		max = hr2;
	}
	if (hr2 < min){
		min = hr2;
	}
	
	// Gellish MHR
	hr3 = 207 - 0.7*age;
	cout << "Gellish MHR formula" << hr3 << endl;
	
	if (hr3 > max){
		max = hr3;
	}
	if (hr3 < min){
		min = hr3;
	}
	
	cout << "Max: " << max << " Min: " << min << endl;
	return 0;
} 	
