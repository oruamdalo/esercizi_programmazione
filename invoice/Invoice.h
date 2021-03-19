#include <string>

class Invoice{
	
	public:
		Invoice(std::string partNumber,
				std::string desc,
				int qty,
				int price);
		
		// Setters
		void setPartNumber(std::string partNumber);
		void setDesc(std::string desc);
		void setQuantity(int qty);
		void setPrice(int price);

		// Getters
		std::string getPartNumber();
		std::string getDesc();
		int getQuantity();
		int getPrice();

		// Member Functions		
		float getInvoiceAmount();

	private:
		std::string partNumber;
		std::string desc;
		int qty;
		int price; // 1050 -> 10.50€
		double VAT{20}; // percentuale IVA
		double discount{0};
	
};
