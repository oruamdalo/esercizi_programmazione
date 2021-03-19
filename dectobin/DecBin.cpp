// Convert decimal to binary - without arrays
// @author: michel o'scugnizz

#include <iostream>

int getReverse(int);
int getBinary(int);

int main(){

	int dec{0};
	int bin{1};

	std::cout << "Inserisci numero in base 10: ";
	std::cin >> dec;

	bin = getBinary(dec);

	std::cout << "Binario: " << bin << std::endl;
}

int getBinary(int dec){
	int bin{1};
	while (dec != 1){ 
        short res = dec % 2;
        bin = bin*10 + res;
        dec /= 2;
    } 

	return getReverse(bin);
}

int getReverse(int num){
	int bin{1};
	while(num != 1){
		int res = num%10;
		bin = bin*10 + res;
		num /= 10;
	}
	
	//bin *= 10;

	return bin;
}

