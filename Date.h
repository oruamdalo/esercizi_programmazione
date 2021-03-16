#include <iostream>

class Date{

	public:
		Date(int m, int d, int y) : day{d}, year{y}{
			setMonth(m);
		}

		// Getters
		int getDay(){ return day; }
		int getMonth(){ return month; }
		int getYear(){ return year; }

		// Setters
		void setDay(int d){ day = d; }
		void setMonth(int m){ 
			if (!(m > 12 || m < 1)){
  				month = m;
			}
	
		}
		void setYear(int y){ year = y; }
		
		// Member Functions
		void displayDate(){
			std::cout << month << "/" << day << "/" << year << std::endl;
		}		
	
	private:
		int day, month, year;

};
