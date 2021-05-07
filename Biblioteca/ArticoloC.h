#include <string>
#include "Pubblicazione.h"
#include "Convegno.h"

#ifndef ARTC_H
#define ARTC_H


class ArticoloC: public Pubblicazione{
    public:
        ArticoloC();
        ArticoloC(std::string, std::string, int, int, std::string, std::string);

        // Getters
        int getPagina();
        Convegno getConvegno();

        // Setters
        ArticoloC& setPagina(int);
        ArticoloC& setConvegno(const Convegno&);
    private:
        Convegno convegno;
        int pagina;
};
#endif
