//
// Created by kevin on 29.08.2024.
//

#include "Selection.h"

/*
 * selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort
 */

void Selection::selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++){
        int min_index = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if (min_index != i) {
            std::swap(arr[i], arr[min_index]);
        }
    }
}

void Selection::displayArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl;
}
