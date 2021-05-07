#include "Convegno.h"
#include <string>

Convegno::Convegno(){}
Convegno::Convegno(std::string t, std::string s) : titolo(t), sede(s){};

// Getters
std::string Convegno::getTitolo(){ return titolo; }
std::string Convegno::getSede(){ return sede; }

// Setters
Convegno& Convegno::setTitolo(std::string titolo){
    this->titolo = titolo; return *this;
}
Convegno& Convegno::setSede(std::string sede){
    this->sede = sede; return *this;
}