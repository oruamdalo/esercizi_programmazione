#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void printMaxMin(int, int);

int main(){

    int max{0};
	int min{0};
	int input{0};

	cout << "Enter values (0 to stop): " << endl;
	cin >> input;

	if (input == 0){
		cout << "No values entered. Stop.";
	}else{
		min = input;
		max = input;

		while(input != 0){
			
			cin >> input;

			if (input != 0){
				if (input > max) max = input;
				if (input < min) min = input;
			}
		}

		printMaxMin(max, min);
	}

    return 0;
}

void printMaxMin(int max, int min){
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
}
