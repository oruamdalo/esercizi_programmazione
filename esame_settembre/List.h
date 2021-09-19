#ifndef LIST_H
#define LIST_H
#include "List.h"
#include "Node.h"

// Lista che aggiunge dietro e rimuove da dietro
class List{
    public:
        List();
        ~List();
        List(const List&) noexcept;

        List& operator=(const List&) noexcept;
        
        // Modifiers
        void push(int);
        bool pop(int&);

        // Checkers
        bool isEmpty() const;
        bool contains(int) const; // page id, pos (if found)

        // ToString
        void display() const;

    private:
        Node* head{nullptr};

        Node* getNewNode(int);
};

#endif