#include <iostream>
#include <array>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>
#include "Articolo.h"

using std::cout;
using std::cin;
using std::cout;
using std::endl;

const size_t MAX_LEN{100};

enum class Choice{INSERT=1, DELETE, UPDATE, PRINT, EXIT};

Choice enterChoice();
void addArticolo(std::fstream&);
void displayLista(std::fstream&);
void updateArticolo(std::fstream&);
void deleteArticolo(std::fstream&);
int getArticleId();

int main(){
    const std::string fileName{"/Users/maurodalo/Documents/programmazione/codici/Magazzino/hardware.dat"};
    std::fstream listaFile{fileName, std::ios::in | std::ios::out | std::ios::binary};

    if (!listaFile){
        std::cerr << "Impossibile aprire il file " << fileName << endl;
        exit(EXIT_FAILURE);
    }

    Choice choice;
    cout << "==============================" << endl;
    cout << "==== GESTIONALE MAGAZZINO ====" << endl;
    cout << "==============================" << endl;

    while((choice = enterChoice()) != Choice::EXIT){
        switch(choice){
            case Choice::INSERT: {
                addArticolo(listaFile);
            }
            break;

            case Choice::PRINT: {
                displayLista(listaFile);
            }
            break;

            case Choice::DELETE: {
                deleteArticolo(listaFile);
            }
            break;

            case Choice::UPDATE: {
                updateArticolo(listaFile);
            }
            break;

            case Choice::EXIT: {
                cout << "Chiusura programma." << endl;
                break;
            }
            
            default:
                std::cerr << "Scelta non valida" << endl;
                break;
        }

        listaFile.clear();
    }    
    return 0;
}

Choice enterChoice(){
    
    cout << "Cosa vuoi fare?"
        << "\n[1] Inserire un nuovo articolo"
        << "\n[2] Rimuovere articolo"
        << "\n[3] Aggiornare articolo"
        << "\n[4] Visualizzare articoli"
        << "\n[5] Uscire\n";

    int c{0};
    cin >> c;

    return static_cast<Choice>(c);
}

int getArticleId(std::string msg){
    cout << msg;

    int id{-1};
    cin >> id;

    if (id <= 0 || id > 100){
        throw std::invalid_argument("Il codice ID non e' valido");
    }

    return id;
}

void addArticolo(std::fstream &fileLista){
    int newId = getArticleId("Inserisci nuovo id: ");

    Articolo temp;

    fileLista.seekg((newId-1) * sizeof(Articolo));
    fileLista.read(reinterpret_cast<char*>(&temp), sizeof(Articolo));
    fileLista.clear();

    // Check if it already exists in file with same id
    if (temp.getId() == -1){
        std::string name;
        double price;
        int amount;

        cout << "Inserisci nome, prezzo, quantita\n";
        cin >> std::setw(15) >> name;
        cin >> std::setw(5) >> price;
        cin >> amount;

        // Fill object with new values
        temp.setId(newId).setName(name).setPrice(price).setAmount(amount);

        // Write object to file - seekg positioned also seekp (?)
        
        fileLista.seekp((newId-1) * sizeof(Articolo));
        fileLista.write(reinterpret_cast<const char*>(&temp), sizeof(Articolo));
    }else{
        cout << "Articolo #" << newId << " esiste gia." << endl;
    }
}

void updateArticolo(std::fstream &fileLista){
    Articolo temp;
    int updateId = getArticleId("Inserisci id da aggiornare: ");

    fileLista.seekg((updateId-1) * sizeof(Articolo));
    fileLista.read(reinterpret_cast<char*>(&temp), sizeof(Articolo));
    fileLista.clear();

    if (temp.getId() == updateId){
        std::string name;
        double price;
        int amount;

        cout << "Inserisci nome, prezzo, quantita\n";
        cin >> std::setw(15) >> name;
        cin >> std::setw(5) >> price;
        cin >> amount;

        temp.setId(updateId).setName(name).setPrice(price).setAmount(amount);

        fileLista.seekp((updateId-1) * sizeof(Articolo));
        fileLista.write(reinterpret_cast<const char*>(&temp), sizeof(Articolo));
    }else{
        cout << "Articolo #" << updateId << " non esiste." << endl;
    }
}

void deleteArticolo(std::fstream &fileLista){
    int removeId = getArticleId("Inserisci id da rimuovere: ");

    Articolo temp;

    fileLista.seekg((removeId-1) * sizeof(Articolo));
    fileLista.read(reinterpret_cast<char*>(&temp), sizeof(Articolo));
    fileLista.clear();

    // Check if it already exists in file with same id
    if (temp.getId() == removeId){
        // Write object to file - seekg positioned also seekp (?)
        
        Articolo blank{};
        fileLista.seekp((removeId-1) * sizeof(Articolo));
        fileLista.write(reinterpret_cast<const char*>(&blank), sizeof(Articolo));
    }else{
        cout << "Articolo #" << removeId << " non esiste." << endl;
    }
}

void displayLista(std::fstream &fileLista){
    Articolo temp;
    
    cout << std::left << std::setw(10) << "Articolo" 
                    << std::setw(10) << "Nome" 
                    << std::setw(10) << "Prezzo"
                    << std::setw(10) << "Quantita" << endl;
    
    fileLista.seekg(0);
    fileLista.read(reinterpret_cast<char*>(&temp), sizeof(Articolo));
    
    while(fileLista){
        if (temp.getId() != 0 && temp.getId() != -1){
            cout << temp << endl;
        }
        fileLista.read(reinterpret_cast<char*>(&temp), sizeof(Articolo));
        
    }
}