#include <iostream>
#include "Crypto.h"
using std::cout;
using std::cin;
using std::endl;

int main(){

    int mode{0};
    int message{0};
    Crypto crypto{0};

    cout << "Inserire messaggio: ";
    cin >> message;

    crypto.setMessage(message);

    while(!crypto.isValid()){
        cout << "Il messaggio inserito non e valido! Inserisci: ";
        cin >> message;

        crypto.setMessage(message);

    }
   
    cout << "Cosa fare?\n1) Criptare\n2) Decriptare\nPremi un altro tasto per uscire...\n";
    cin >> mode;

    switch (mode){
        case 1:
            crypto.encryptMessage();
            break;
        
        case 2:
            crypto.decryptMessage();
            break;
        default:
            cout << "Chiusura programma.\n";
            return 0;
    }
    
    cout << "Messaggio dopo conversione: " << crypto.getMessage() << endl;
    

    return 0;
}