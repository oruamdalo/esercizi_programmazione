#include <vector>
#include "MergeSort.h"
#include <stdexcept>

template<typename T>
std::vector<T> mergeSort(std::vector<T> v){
    size_t s = v.size();

    if (s == 1){
        return v;
    }else{
        int m = s/2;
        std::vector<T> L = {v.begin(), v.begin() + m};
        std::vector<T> R = {v.begin() + m , v.end()};

        L = mergeSort(L);
        R = mergeSort(R);

        return merge(L, R);
    }
}

template<typename T>
std::vector<T> merge(std::vector<T> L, std::vector<T> R){
    std::vector<T> out{};

    while (!L.empty() && !R.empty()){
        if (L.front() < R.front()){
            out.push_back(L.front());
            removeFirst(L);
        }else{
            out.push_back(R.front());
            removeFirst(R);
        }
    }

    while(!L.empty()){
        out.push_back(L.front());
        removeFirst(L);
    }

    while(!R.empty()){
        out.push_back(R.front());
        removeFirst(R);
    }

    return out;
}

template <typename T>
void removeFirst(std::vector<T> &v){
    try{
        v.erase(v.begin());
    }catch(std::length_error){
        return;
    }
}