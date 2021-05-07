#include <string>

#ifndef PUB_H
#define PUB_H



class Pubblicazione{
    public:
        Pubblicazione();
        Pubblicazione(std::string, std::string, int);

        enum class Type{PUB = 0, LIB, ARTR, ARTC};

        // Getters
        std::string getTitolo();
        std::string getAutori();
        int getAnno();

        // Setters
        Pubblicazione& setTitolo(const std::string&);
        Pubblicazione& setAutori(const std::string&);
        Pubblicazione& setAnno(const int&);
        Pubblicazione& setType(const Type&);

        // Overload <
        bool operator<(const Pubblicazione &rhs);

        std::string toString() const;

        
    protected:
        std::string titolo;
        std::string autori;
        int anno;
        Type type;

};
#endif