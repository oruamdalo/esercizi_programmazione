#include <iostream>
#include <string>
#include <iomanip>

#ifndef ARTICOLO_H
#define ARTICOLO_H

class Articolo{
    public:
        Articolo();
        Articolo(int id);

        // Getters
        Articolo& setId(int id);
        Articolo& setAmount(int amount);
        Articolo& setPrice(double price);
        Articolo& setName(const std::string&);

        // Setters
        int getId();
        int getAmount();
        double getPrice();
        std::string getName() const;

        // Overload Ostream
        friend std::ostream& operator<<(std::ostream& os, const Articolo& art);

    private:
        int id{-1};
        int amount{0};
        double price{0.0};
        char name[15];
};


#endif



/*MAIN TODO
case Choice::DELETE: { //? Rimuovi
                int remove{0};

                if (articoli.size() <= 0){
                    cout << "Non sono presenti articoli! " << endl;
                }else{

                    display(articoli);
                    cout << "Quale articolo vuoi rimuovere?";
                    cin >> remove;

                    if (remove < 0 || remove > articoli.size() - 1){
                        throw std::invalid_argument("L'articolo richiesto non esiste!");
                    }else{
                        articoli.erase(articoli.begin() + remove);
                    }
                }

                
            }
            break;
            case Choice::UPDATE: { //? Aggiorna
                int modify = 0; 
                display(articoli);
                cout << "Quale articolo vuoi modificare?";
                cin >> modify;
                if (modify < 0 || modify > articoli.size() - 1){
                    throw std::invalid_argument("L'articolo richieto non esiste!");
                }else{
                    update(articoli[modify]);
                }
                
            }
            break;*/