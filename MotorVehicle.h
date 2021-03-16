#include <string>

class MotorVehicle{
	
	public:
		MotorVehicle(std::string make, std::string feulType, std::string color);	

		// Getters
		std::string getMake();
		std::string getFeulType();
		std::string getColor();
		int getYear();
		int getCapacity();	
	
		// Setters
		void setMake(std::string make);
		void setFeulType(std::string feulType);
		void setColor(std::string color);
		void setYear(int year);
		void setCapacity(int cap);		


	private:
		std::string make;
		std::string feulType;
		std::string	color;	
		int yearOfManufacture;
		int engineCapacity;

};
