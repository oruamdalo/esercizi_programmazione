#ifndef NODE_H
#define NODE_H

class List;

class Node{
    friend class List;

    public:
        Node(){

        }
        Node(int d):data(d){

        }

        int getData() const{
            return data;
        }
        void setData(int data){ 
            this->data = data;
        }
    
    private:
        int data;
        Node* next{nullptr};
};

#endif