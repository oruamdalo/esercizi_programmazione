#include <iostream>

class Account{
		
	
	public:
		Account(std::string accountName, int initBalance) : name{accountName}{
			if (initBalance > 0){
				balance = initBalance;	
			}
		}

		void setName(std::string accountName){
			name = accountName;
		}
	
		void deposit(int amount){
			balance += amount;	
		}

		int getBalance() const{
			return balance;
		}

		std::string getName() const{
			return name;
		}

		void displayAccount(){
			std::cout << "Il bilancio di " << name << " e\' di €" << balance << std::endl;
		}

		bool withdraw(int amount) { //prelievo
			if (amount > 0){
				if (amount > balance){
					std::cout << "Impossibile prelevare la somma €" << amount << " dal conto di " << name << std::endl;
					return false;
				}else{
					std::cout << "Prelievo da " << name << " di €" << amount << " effettuato con successo" << std::endl;
					balance -= amount;
					return true;
				}
			}else{
				std::cout << "La somma da prelevare dal conto di " << name << " deve essere maggiore di zero" << std::endl;
			}	
			return false;
		}
	
	private:
		std::string name;
		int balance{0};
};
