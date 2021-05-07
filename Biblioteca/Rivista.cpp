#include "Rivista.h"
#include <string>

Rivista::Rivista(){}

Rivista::Rivista(int n, const std::string &t) : numero(n), titolo(t){}

int Rivista::getNumero(){ return numero; }
std::string Rivista::getTitolo(){ return titolo; }

// Setters
Rivista& Rivista::setNumero(int numero){ this->numero = numero; return *this;}
Rivista& Rivista::setTitolo(const std::string &titolo){ this->titolo = titolo; return *this;}