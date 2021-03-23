#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(){
	int num{0};
	int reverse{0};
	int temp;

	cout << "Inserisci numero: ";
	cin >> num;

	temp = num;

	// get reverse of num	
	while (temp!=0){
		int res = temp % 10;
		reverse = reverse*10 + res;
		temp /= 10;
	}

	cout << "Reverse: " << reverse << endl;
	
	if (reverse == num){
		cout << "Il numero e\' palindromo" << endl;
	}else{
		cout << "Il numero non e\' palindromo" << endl;
	}

	return 0;
}
