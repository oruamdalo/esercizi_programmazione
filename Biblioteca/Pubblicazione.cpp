#include "Pubblicazione.h"
#include <string>
#include <sstream>

Pubblicazione::Pubblicazione(){
    type = Type::PUB;
}

Pubblicazione::Pubblicazione(std::string t, std::string a, int an)
: titolo(t), autori(a), anno(an){
    type = Type::PUB;
}

std::string Pubblicazione::getTitolo(){
    return titolo;
}

std::string Pubblicazione::getAutori(){
    return autori;
}

int Pubblicazione::getAnno(){
    return anno;
}

Pubblicazione& Pubblicazione::setAutori(const std::string &autori){
    this->autori = autori;
    return *this;
}

Pubblicazione& Pubblicazione::setTitolo(const std::string &titlo){
    this->titolo = titlo;
    return *this;
}

Pubblicazione& Pubblicazione::setAnno(const int &anno){
    this->anno = anno;
    return *this;
}

Pubblicazione& Pubblicazione::setType(const Type &type){
    this->type = type;
}

bool Pubblicazione::operator<(const Pubblicazione &rhs){
    
}

std::string Pubblicazione::toString() const{
    std::ostringstream ss{};
    ss << "Titolo: " << titolo << ", Autori: " << autori << ", Anno: " << anno;
    return ss.str();
}