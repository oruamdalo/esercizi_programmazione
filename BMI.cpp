#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	float weight{0};
	float height{0};

	cout << "Inserire peso (Kgs): ";
	cin >> weight;

	cout << "Inserire altezza (m): ";
	cin >> height;
	
	float bmi{weight/(height * height)};
	
	cout << "BMI calcolato: " << bmi << endl;
	return 0;
}
