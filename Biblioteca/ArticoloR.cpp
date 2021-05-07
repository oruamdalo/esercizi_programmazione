#include "ArticoloR.h"
#include "Rivista.h"
#include "Pubblicazione.h"
#include <string>

ArticoloR::ArticoloR(){
    Pubblicazione();
}
ArticoloR::ArticoloR(std::string titolo, std::string autori, int anno, int nr, const std::string tr, int i, int f) : inizio(i), fine(f){
    Pubblicazione(titolo, autori, anno);
    rivista = Rivista(nr, tr);
}

// Getters
Rivista ArticoloR::getRivista(){ return rivista; }
int ArticoloR::getInizio(){ return inizio; }
int ArticoloR::getFine(){ return fine; }

// Setters
ArticoloR& ArticoloR::setRivista(const Rivista& r){ rivista = r; return *this; }
ArticoloR& ArticoloR::setInizio(int i){ inizio = i; return *this; }
ArticoloR& ArticoloR::setFine(int f){ fine = f; return *this; }