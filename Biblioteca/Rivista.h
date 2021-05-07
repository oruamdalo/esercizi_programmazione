#include <string>

#ifndef RIVISTA_H
#define RIVISTA_H
class Rivista{
    public:
        Rivista();
        Rivista(int n, const std::string &t);

        // Getters
        int getNumero();
        std::string getTitolo();

        // Setters
        Rivista& setNumero(int);
        Rivista& setTitolo(const std::string&);
    private:
        int numero;
        std::string titolo;
};
#endif