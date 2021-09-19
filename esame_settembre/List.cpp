#include "List.h"
#include "Node.h"
#include <iostream>

List::List(){

}
List::~List(){
    if (!isEmpty()){
        Node* temp;
        Node* curr{head};

        while (curr != nullptr){
            temp = curr;
            curr = curr->next;

            delete temp;
        }
    }
}

List::List(const List &l) noexcept{
    Node* curr{l.head};
    while (curr != nullptr){
        push(curr->getData());
    }
}

List& List::operator=(const List &l) noexcept{
    Node* curr{l.head};
    while (curr != nullptr){
        push(curr->getData());
    }
    return *this;
}

// Modifiers
void List::push(int data){
    Node* toAdd = getNewNode(data);

    if (isEmpty()){
        head = toAdd;
    }else{
        Node* curr{head};

        while (curr->next != nullptr){
            curr = curr-> next;
        }

        curr->next = toAdd;
    }
}
bool List::pop(int &data){
    if (isEmpty()){
        return false;
    }else{
        Node* curr{head}; // Node to be removed
        Node* temp;
        while (curr->next != nullptr){
            temp = curr;
            curr = curr-> next;
        }

        temp->next = nullptr;
        delete curr;
        return true;       
    }
}

// Checkers
bool List::isEmpty() const{
    return head==nullptr;
}

bool List::contains(int id) const{// page id, pos (if found)
    Node* curr{head};

    while (curr != nullptr){
        if (curr->getData() == id) return true;
        curr = curr->next;
    }

    return false;
}

// ToString
void List::display() const{
    if (!isEmpty()){
        Node* curr{head};
        while (curr->next != nullptr){
            std::cout << curr->getData() << " <-> ";
            curr = curr->next;
        }
        std::cout << curr->getData();
    }
    std::cout << "\n";
}

// Private Methods
Node* List::getNewNode(int data){
    return new Node(data);
}