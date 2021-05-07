#include <string>

#ifndef CONV_H
#define CONV_H

class Convegno{
    public:
        Convegno();
        Convegno(std::string t, std::string s);

        // Getters
        std::string getTitolo();
        std::string getSede();

        // Setters
        Convegno& setTitolo(std::string titolo);
        Convegno& setSede(std::string sede);
    private:
        std::string titolo;
        std::string sede;
        
};
#endif
