#include <vector>

#ifndef MERGE_H
#define MERGE_H

template <typename T>
std::vector<T> mergeSort(std::vector<T>);

template <typename T>
std::vector<T> merge(std::vector<T>, std::vector<T>);

template <typename T>
void removeFirst(std::vector<T>&);

#endif