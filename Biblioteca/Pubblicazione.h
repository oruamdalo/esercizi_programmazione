#include <string>
#include <vector>

#ifndef PUB_H
#define PUB_H



class Pubblicazione{
    public:
        Pubblicazione();
        Pubblicazione(std::string, std::string, int);

        enum class Type{PUB = 0, LIB, ARTR, ARTC};

        // Getters
        std::string getTitolo();
        std::string getAutori() const;
        int getAnno();

        // Setters
        Pubblicazione& setTitolo(const std::string&);
        Pubblicazione& setAutori(const std::string&);
        Pubblicazione& setAnno(const int&);
        Pubblicazione& setType(const Type&);

        // Overload <
        bool operator<(const Pubblicazione &rhs);

        virtual std::string toString() const;

        
    protected:
        std::string titolo;
        std::vector<std::string> autori;
        int anno;
        Type type;

};
#endif