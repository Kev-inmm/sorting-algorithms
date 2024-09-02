#include <iostream>
#include <cstdlib>
#include <ctime>

#include "algorithms/SelectionSort/Selection.h"

int main() {

    int* array = SortAlgorithm::createArray(10, true);

    Selection::selectionSort(array, 10);
    SortAlgorithm::displayArray(array, 10);
}
