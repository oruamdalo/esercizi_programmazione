#include "Pubblicazione.h"
#include "Rivista.h"
#include <string>

#ifndef ARTR_H
#define ARTR_H

class ArticoloR: public Pubblicazione{
    public:
        ArticoloR();
        ArticoloR(std::string, std::string, int, int, std::string, int, int);

        // Getters
        Rivista getRivista();
        int getInizio();
        int getFine();

        // Setters
        ArticoloR& setRivista(const Rivista&);
        ArticoloR& setInizio(int);
        ArticoloR& setFine(int);

    private:
        Rivista rivista;
        int inizio, fine;
};
#endif
