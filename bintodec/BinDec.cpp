#include <iostream>
#include <math.h>

int getDecimal(int);

int main(){
	
	int dec{0};
	int bin{0};

	std::cout << "Inserisci numero binario: ";
	std::cin >> bin;

	dec = getDecimal(bin);

	std::cout << "Decimale: " << dec << std::endl;

	return 0;
}

int getDecimal(int bin){
	unsigned int dec{0};
	unsigned int count = 0;
	while(bin != 1){
//		short res = (bin/=10, bin%10);
		short res = bin % 10;

		bin /= 10;

		dec += res * pow(2, count++);
	
		std::cout << "Resto: " << res << " | Binario: " << bin << " | Decimale: " << dec << std::endl;
	}

	dec += pow(2, count);

	return dec;
}
