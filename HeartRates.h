#include <string>
#include "Date.h"

class HeartRates{
	public:
		HeartRates(std::string fname, std::string lname, Date birth);

		// Getters
		std::string getFirstName(){ return firstName; }
		std::string getLastName(){ return lastName; }
		Date getBirthDate(){ return birthDate; }

		// Setters
		void setFirstName(std::string fname){ firstName = fname; }
		void setLastName(std::string lname){ lastName = lname; }
		void setBirthDate(Date date){ birthDate = date; }

		// Member Function


	private:
		std::string firstName, lastName;
		Date birthDate;
};
