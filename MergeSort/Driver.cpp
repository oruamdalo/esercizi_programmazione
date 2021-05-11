#include <iostream>
#include <vector>
#include <stdexcept>
#include "MergeSort.cpp"

using std::cout;
using std::cin;
using std::endl;
using std::vector;

template <typename T>
void displayVec(const vector<T> &vec);


int main(){

    vector<int> lista{10, 3, 15, 2, 1, 4, 9, 0};

    cout << "Lista NON ordinata: " << endl;
    displayVec(lista);
    cout << endl;

    std::vector<int> sorted = mergeSort(lista);

    cout << "Lista ordinata: " << endl;
    displayVec(sorted);
    cout << endl;

    return 0;
}

template <typename T>
void displayVec(const vector<T> &vec){
    for (const T &i: vec){
        cout << i << " ";
    }
}