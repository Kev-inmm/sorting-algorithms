//
// Created by kevin on 03.09.2024.
//

#ifndef SORTING_ALGORITHMS_MERGE_H
#define SORTING_ALGORITHMS_MERGE_H


#include "../SortAlgorithm.h"

class Merge : public SortAlgorithm {
public:
    static void mergeSort(int[], int);
    static void displayArray(int[], int);
private:
    static void merge(int[], int[], int, int[], int);
};


#endif //SORTING_ALGORITHMS_MERGE_H
