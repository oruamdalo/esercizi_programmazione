#include "Libro.h"
#include <string>
#include <sstream>
#include <stdexcept>

Libro::Libro(){}

Libro::Libro(unsigned long int isbn, std::string editore, std::string titolo, std::string autori, int anno)
: Pubblicazione(titolo, autori, anno){
    setIsbn(isbn);
    this->editore = editore;
}

// Getters
int Libro::getIsbn(){ return isbn; }
std::string Libro::getEditore(){ return editore; };

// Setters
Libro& Libro::setIsbn(unsigned long int i){
    
    std::string isbnStr{std::to_string(i)}; // Convert ISBN to string
    if (isbnStr.length() != 13){ // Check if ISBN has 13 digits
        throw std::invalid_argument("L\'ISBN inserito non e\' valido!");
    }else{
        this->isbn = i;
    }

    return *this;
}

Libro& Libro::setEditore(const std::string &edtiore){
    this->editore = editore;
    return *this;
}

std::string Libro::toString() const{
    std::stringstream ss{};
    ss << Pubblicazione::toString()
        << "\nISBN: " << isbn
        << "\nEditore: " << editore;
    return ss.str();
}