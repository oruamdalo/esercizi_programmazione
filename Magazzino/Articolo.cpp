#include "Articolo.h"
#include <string>


Articolo::Articolo(){setName("N/A");}

Articolo::Articolo(int id){
    setId(id);
    setName("N/A");
}

Articolo& Articolo::setId(int id){
    if (id < 0 || id > 99){
        throw std::invalid_argument("Id non è valido");
    }
    this->id = id;
    return *this;
}

Articolo& Articolo::setAmount(int amount){
    if (amount < 0){
        throw std::invalid_argument("Quantita non puo essere negativa");
    }
    this->amount = amount;
    return *this;
}

Articolo& Articolo::setPrice(double price){
    if (price < 0){
        throw std::invalid_argument("Prezzo non puo essere negativo");
    }
    this->price = price;
    return *this;
}

Articolo& Articolo::setName(const std::string& nameStr){
    size_t len{nameStr.size()};
    len = (len < 10 ? len : 9);
    nameStr.copy(name, len); // Copy name to this->name using strings
    name[len] = '\0';

    return *this;
}


int Articolo::getId(){ return id; }
int Articolo::getAmount(){ return amount; }
std::string Articolo::getName() const{ return name; }
double Articolo::getPrice(){ return price; }

std::ostream& operator<<(std::ostream& os, const Articolo& art){
    os << std::setw(10) << art.id << std::setw(10) << art.name << std::setw(10) << art.amount << std::setw(10) << art.price;
    return os; 
}