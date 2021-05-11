#include "Functions.h"

using std::cout;
using std::cin;
using std::endl;

// TODO1: make Pubblicazione pure virtual and prevent it from being instantiated
// TODO2: use dynamic_cast to check object type instead of enum class

int main(){
    std::vector<Pubblicazione*> pubblicazioni{};

    // Aggiungo in automatico
    /*Pubblicazione p = Pubblicazione("Come morire giovane", "Mauro", 2021);
    pubblicazioni.push_back(&p);*/ 
    
    Libro l = Libro(1234567891234, "TopiMorti", "Jamm Bell", "Lorenzo, Fabio", 2020);
    pubblicazioni.push_back(&l);

    Choice choice;
    while((choice = enterChoice()) != Choice::EXIT){
        switch(choice){
            case Choice::ADD: {
                addPub(pubblicazioni);
                Libro l = Libro(1234567891234, "TopiMorti", "Jamm Bell", "Lorenzo, Fabio", 2020);
                pubblicazioni.push_back(&l);
            }break;

            case Choice::PRINT:{
                displayLista(pubblicazioni);
            }break;

            case Choice::EXIT:{
                cout << "Chiusura programma..." << endl;
            }
            break;
        }
    }

    
}

Choice enterChoice(){
    cout << "Cosa vuoi fare?"
    << "\n[1] Inserire pubblicazione"
    << "\n[2] Visualizzare pubblicazioni"
    << "\n[3] Uscire\n";

    int choice{0};
    cin >> choice;
    if (choice < 0 || choice > 3){
        throw std::invalid_argument("Scelta non consentita!");
        exit(EXIT_FAILURE);
    }
    return static_cast<Choice>(choice);
}


void addPub(std::vector<Pubblicazione*> &lista){
    Libro* l = new Libro(1234567891234, "MortiTopi", "Jamm Buon", "Gino, Lino", 2021);
    lista.push_back(l);
}

// Functions implementations
/*
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
    //std::cout << "Inserisci titolo, autori e anno: ";
    //std::cin >> titolo >> autori >> anno;

    // Puo essere Libro, Articolo o Pub
   
    switch (choice){
        case Pubblicazione::Type::PUB:{
            Pubblicazione p = Pubblicazione(titolo, autori, anno);
            lista.push_back(&p);
        }
        break;
        
        case Pubblicazione::Type::LIB:{
            std::cout << "weee" << std::endl;
            long int isbn;
            std::string editore;
            std::cout << "Inserisci ISBN e editore: ";
            std::cin >> isbn >> editore;
            Libro l = Libro(1234567891234, "TopiMorti", "Jamm Bell", "Lorenzo, Fabio", 2020);
            //Libro p = Libro(isbn, editore, titolo, autori, anno);
            lista.push_back(&l);
        }break;

        case Pubblicazione::Type::ARTR: {
            int nr, i, f;
            std::string tr;
            std::cout << "Inserisci numero rivista, titolo rivista, pagina inizio e fine";
            std::cin >> nr >> tr >> i >> f;

            ArticoloR p = ArticoloR(titolo, autori, anno, nr, tr, i, f);
            lista.push_back(&p);
        }break;

        case Pubblicazione::Type::ARTC: {

        }break;

        default:
            std::cerr << "Tipo inserio non valido" << std::endl;
            break;
    }
    
    //std::cout << "size before: " << lista.size() << std::endl;
    
    //std::cout << "size after:" << lista.size() << std::endl;
}*/

void displayLista(std::vector<Pubblicazione*> lista){
    for(Pubblicazione* p:lista){
        cout << p->toString() << endl << endl;
    }
}