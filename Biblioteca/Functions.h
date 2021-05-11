#include "Pubblicazione.h"
#include "ArticoloC.h"
#include "ArticoloR.h"
#include "Libro.h"
#include <vector>
#include <iostream>

enum class Choice{ADD = 1, PRINT, EXIT};

void addPub(std::vector<Pubblicazione*>&);
void displayLista(std::vector<Pubblicazione*>);
Choice enterChoice();