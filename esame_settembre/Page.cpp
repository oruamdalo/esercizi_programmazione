#include "Page.h"
Page::Page(){

}
Page::Page(int N){// int N = numero di pagine del web
    P = (double)1/N;
} 

// Setters
void Page::setId(int id){
    this->id = id;
}
void Page::setL(int L){
    this->L = L;
}
void Page::setP(double P){
    this->P = P;
}

// Getters
int Page::getId() const{
    return id;
}
int Page::getL() const{
    return L;
}
double Page::getP() const{
    return P;
}