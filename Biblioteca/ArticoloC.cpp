#include "ArticoloC.h"
#include "Convegno.h"
#include "Pubblicazione.h"

ArticoloC::ArticoloC(){
    Pubblicazione();
}

ArticoloC::ArticoloC(std::string titolo, std::string autori, int anno, int pagina, std::string tc, std::string sede){
    Pubblicazione(titolo, autori, anno);
    setPagina(pagina);
    convegno = Convegno(tc, sede);
}

// Getters
int ArticoloC::getPagina(){ return pagina; }
Convegno ArticoloC::getConvegno(){ return convegno; }

// Setters
ArticoloC& ArticoloC::setPagina(int p){ pagina = p; return *this; }
ArticoloC& ArticoloC::setConvegno(const Convegno& c){ convegno = c; return *this; }