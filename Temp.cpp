#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	int *V, K, n;
	bool isMax = true;

	cout << "Quanto e\' lungo il vettore: ";
	cin >> n;

	V = new int[n];

	for(short int i=0; i<n; i++){
		cout << "Inserisci elemento " << i+1 << " del vettore: ";
		cin >> V[i];
	}

	cout << "Inserire valore K: ";
	cin >> K;

	cout << "Vettore inserito" << endl;
	for(short int i=0; i<n; i++){
		if (V[i] < K) isMax = false;
		cout << V[i] << " ";
	}

	cout << endl;

	if (isMax) cout << "I valori sono tutti maggiori!\n";
	else cout << "I valori non sono tutti maggiori!\n";	


	return 0;
}
