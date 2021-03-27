#include "Crypto.h"
#include <iostream>
// SIGNATURES
int* intToArray(int num);
int arrayToInt(int* arr);
void printArray(int* arr, int dim);
void swap(int &i, int &j);

// IMPLEMENTATIONS
// CRYPTO CLASS

void Crypto::encryptMessage(){
    int* msgArr = intToArray(msg);

    for (int i=0; i<CORRECT_LENGTH; i++){
        msgArr[i] += 7;
        msgArr[i] %= 10;
    }

    swap(msgArr[0], msgArr[2]);
    swap(msgArr[1], msgArr[3]);

    msg = arrayToInt(msgArr);

}

void Crypto::decryptMessage(){
    int* msgArr = intToArray(msg);

    for (int i=0; i<CORRECT_LENGTH; i++){
        msgArr[i] += ((msgArr[i] < 7) ? 3 : -7);
    }

    swap(msgArr[0], msgArr[2]);
    swap(msgArr[1], msgArr[3]);

    msg = arrayToInt(msgArr);
}

bool Crypto::isValid(){
    return (msg > 999 && msg < 10000);
}


// STANDALONE FUNCTIONS
int* intToArray(int num){
    
    int* output = new int[4];
    int index = 3;
    
    while (num != 0){
        int res = num % 10;
        num /= 10;

        output[index--] = res; 
    }

    return output;

}

int arrayToInt(int* arr){
    int num{0};
    
    int CORRECT_LENGTH = 4;

    for (int i=CORRECT_LENGTH-1; i>=0; i--){
        num += arr[i];
        num *= 10;
    }

    return num/= 10;
}

void printArray(int* arr, int dim){
    std::cout << "Stampa array " << std::endl;
    for (int i=0; i<dim; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

