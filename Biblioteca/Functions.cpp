#include "Functions.h"

void addPub(std::vector<Pubblicazione*> &lista){
    std::cout << "Che tipo di pubblicazione vuoi inserire?"
    << "\n[0] Normale"
    << "\n[1] Libro"
    << "\n[2] Articolo Rivista"
    << "\n[3] Articolo Convegno\n";

    Pubblicazione::Type choice;
    int c{0};
    std::cin >> c;

    choice = static_cast<Pubblicazione::Type>(c);

    // Questi ci sono per ogni tipo di pub
    std::string titolo, autori;
    int anno;
    std::cout << "Inserisci titolo, autori e anno: ";
    std::cin >> titolo >> autori >> anno;

    // Puo essere Libro, Articolo o Pub
    Pubblicazione p;

    switch (choice){
        case Pubblicazione::Type::PUB:{
            p = Pubblicazione(titolo, autori, anno);
        }
        break;
        
        case Pubblicazione::Type::LIB:{
            std::cout << "weee" << std::endl;
            long int isbn;
            std::string editore;
            std::cout << "Inserisci ISBN e editore: ";
            std::cin >> isbn >> editore;
            
            p = Libro(isbn, editore, titolo, autori, anno);
        }break;

        case Pubblicazione::Type::ARTR: {
            int nr, i, f;
            std::string tr;
            std::cout << "Inserisci numero rivista, titolo rivista, pagina inizio e fine";
            std::cin >> nr >> tr >> i >> f;

            p = ArticoloR(titolo, autori, anno, nr, tr, i, f);
        }break;

        case Pubblicazione::Type::ARTC: {

        }break;

        default:
            std::cerr << "Tipo inserio non valido" << std::endl;
            break;
    }
    
    lista.push_back(&p);
}

void displayLista(const std::vector<Pubblicazione*> &lista){
    for ( Pubblicazione* p: lista){
        std::cout << p->toString() << std::endl << std::endl;
    }
}