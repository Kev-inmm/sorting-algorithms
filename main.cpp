#include <iostream>
#include <cstdlib>
#include <ctime>

#include "algorithms/SelectionSort/Selection.h"
#include "algorithms/BubbleSort/Bubble.h"
#include "algorithms/MergeSort/Merge.h"

int main() {

    int* array = SortAlgorithm::createArray(10, true);
    int* array2 = SortAlgorithm::createArray(10, true);
    int* array3 = SortAlgorithm::createArray(10, true);
    int* array4 = SortAlgorithm::createArray(10, true);

    Selection::selectionSort(array, 10);
    Selection::displayArray(array, 10);

    Bubble::bubbleSortA(array2, 10);
    Bubble::displayArray(array2, 10);

    Bubble::bubbleSortB(array3, 10);
    Bubble::displayArray(array3, 10);

    Merge::mergeSort(array4, 10);
    Merge::displayArray(array4, 10);
}
