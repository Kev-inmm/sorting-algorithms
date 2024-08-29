#include <iostream>

#include "algorithms/SelectionSort/Selection.h"

int main() {
    int array[] = {5,2,78,3,1,0};

    std::cout<<"Unsorted Array : ";
    Selection::displayArray(array, 5);

    Selection::selectionSort(array,5);
    std::cout<<"Sorted Array : ";
    Selection::displayArray(array, 5);
}
