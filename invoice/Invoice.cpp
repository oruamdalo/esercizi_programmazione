#include <string>
#include "Invoice.h"
#include <iostream>

Invoice::Invoice(std::string number, std::string dsc, int quty, int prc){
	partNumber = number;
	desc = dsc;
	qty = quty;
	price = prc;
	VAT = 0.2;
	discount = 10;
}

void Invoice::setPartNumber(std::string number){
	partNumber = number;
}

void Invoice::setDesc(std::string dsc){
	desc = dsc;
}

void Invoice::setQuantity(int quty){
	qty = quty;
}

void Invoice::setPrice(int prc){
	price = prc;
}

std::string Invoice::getPartNumber(){
	return partNumber;
}

std::string Invoice::getDesc(){
	return desc;
}

int Invoice::getQuantity(){
	return qty;
}

int Invoice::getPrice(){
	return price;
}

float Invoice::getInvoiceAmount(){
	float invoiceAmount = (float)(qty * price);
	
	invoiceAmount -= invoiceAmount * discount;
	invoiceAmount += invoiceAmount * VAT;

	return invoiceAmount;
}

