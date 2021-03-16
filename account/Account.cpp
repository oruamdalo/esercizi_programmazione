#include <iostream>
#include <string>
#include "Account.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	Account acc1{"Alice", 1000};
	Account acc2{"Bob", 100};
	
	// Display account before
	acc1.displayAccount();
	acc2.displayAccount();


	// Input info acc1.2
	int amount1, amount2;
	cout << "\nInserire deposito per " << acc1.getName() << ": ";
	cin >> amount1;

	acc1.deposit(amount1);

	cout << "Inserire deposito per " << acc2.getName() << ": ";
	cin >> amount2;
	
	acc2.deposit(amount2);
	
	cout << endl;
	// Display account after
	acc1.displayAccount();
	acc2.displayAccount();	
	
	// Prova prelievo
	int wAmount1, wAmount2;
	cout << "Inserire la somma da prelevare per " << acc1.getName() << ": ";
	cin >> wAmount1;

	cout << "Inserire la somma da prelevare per " << acc2.getName() << ": ";
	cin >> wAmount2;

	acc1.withdraw(wAmount1);
	acc2.withdraw(wAmount2);

	return 0;
}
