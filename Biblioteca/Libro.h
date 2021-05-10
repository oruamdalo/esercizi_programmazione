#include "Pubblicazione.h"
#include <string>

#ifndef LIBRO_H
#define LIBRO_H
class Libro: public Pubblicazione{
    public:
        Libro();

        Libro(unsigned long int isbn, std::string editore, std::string titolo, std::string autori, int anno);

        // Getters
        int getIsbn();
        std::string getEditore();

        // Setters
        Libro& setIsbn(unsigned long int isbn);

        Libro& setEditore(const std::string &edtiore);

        std::string toString() const;
    private:
        unsigned int isbn;
        std::string editore;

};
#endif