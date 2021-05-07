#include <iostream>
#include <vector>

#include "Pubblicazione.h"
#include "Libro.h"
#include "ArticoloR.h"

using std::cout;
using std::cin;
using std::endl;

enum class Choice{ADD = 1, PRINT, EXIT};

void addPub(std::vector<Pubblicazione>&);
void displayLista(const std::vector<Pubblicazione>&);
Choice enterChoice();

int main(){
    std::vector<Pubblicazione> pubblicazioni{};

    // Aggiungo in automatico
    pubblicazioni.push_back(Pubblicazione("Come morire giovane", "Mauro", 2021));
    pubblicazioni.push_back(Libro(1234567891234, "TopiMorti", "Jamm Bell", "Lorenzo&Fabio", 2020));

    Choice choice;
    while((choice = enterChoice()) != Choice::EXIT){
        switch(choice){
            case Choice::ADD: {
                addPub(pubblicazioni);
            }break;

            case Choice::PRINT:{
                displayLista(pubblicazioni);
            }break;

            case Choice::EXIT:{
                cout << "Noo broo, ciao brooo" << endl;
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

void addPub(std::vector<Pubblicazione> &lista){
    cout << "Che tipo di pubblicazione vuoi inserire?"
    << "\n[0] Normale"
    << "\n[1] Libro"
    << "\n[2] Articolo Rivista"
    << "\n[3] Articolo Convegno\n";

    Pubblicazione::Type choice;
    int c{0};
    cin >> c;

    choice = static_cast<Pubblicazione::Type>(c);

    // Questi ci sono per ogni tipo di pub
    std::string titolo, autori;
    int anno;
    cout << "Inserisci titolo, autori e anno: ";
    cin >> titolo >> autori >> anno;

    // Puo essere Libro, Articolo o Pub
    Pubblicazione p;

    switch (choice){
        case Pubblicazione::Type::PUB:{
            p = Pubblicazione(titolo, autori, anno);
        }
        break;
        
        case Pubblicazione::Type::LIB:{
            long int isbn;
            std::string editore;
            cout << "Inserisci ISBN e editore: ";
            cin >> isbn >> editore;
            
            p = Libro(isbn, editore, titolo, autori, anno);
        }break;

        case Pubblicazione::Type::ARTR: {
            int nr, i, f;
            std::string tr;
            cout << "Inserisci numero rivista, titolo rivista, pagina inizio e fine";
            cin >> nr >> tr >> i >> f;

            p = ArticoloR(titolo, autori, anno, nr, tr, i, f);
        }break;

        case Pubblicazione::Type::ARTC: {

        }break;

        default:
            std::cerr << "Bro nun po fa sti cos pero', e che cazz tien 20 anni...ittat nda merd" << endl;
            break;
    }

    lista.push_back(p);
}

void displayLista(const std::vector<Pubblicazione> &lista){
    for (const Pubblicazione& p: lista){
        cout << p.toString() << endl;
    }
}