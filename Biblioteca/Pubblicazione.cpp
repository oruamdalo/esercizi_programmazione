#include "Pubblicazione.h"
#include <string>
#include <iostream>
#include <sstream>

Pubblicazione::Pubblicazione(){
    type = Type::PUB;
}

Pubblicazione::Pubblicazione(std::string t, std::string a, int an)
: titolo(t), anno(an){
    type = Type::PUB;
    setAutori(a);
}

std::string Pubblicazione::getTitolo(){
    return titolo;
}

std::string Pubblicazione::getAutori() const{
    std::ostringstream ss{};
    for (int i=0;i<autori.size(); i++){
        ss << autori[i];
        if (i != autori.size() - 1){
            ss << ", ";
        }

    }
    return ss.str();
}

int Pubblicazione::getAnno(){
    return anno;
}

Pubblicazione& Pubblicazione::setAutori(const std::string &aut){
    autori.clear();
    std::stringstream temp(aut);
    std::string seg;
    while(std::getline(temp, seg, ',')){
        autori.push_back(seg);
    }


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
    return autori < rhs.autori;
}

std::string Pubblicazione::toString() const{
    std::ostringstream ss{};
    ss << "Titolo: " << titolo << "\nAutori: " << getAutori() << "\nAnno: " << anno;
    return ss.str();
}