#include <iostream>
#include <string>
#include "Invoice.h"

using std::endl;
using std::cout;

int main(){
	Invoice invoice{"123456", "Non lo so", 5, 10};

	std::string descr = invoice.getDesc();

	cout << "PartNumber: " << invoice.getPartNumber() << endl;
	cout << "Description: " << descr << endl;
	return 0;
}
