//
// Created by kevin on 02.09.2024.
//

#include "Bubble.h"

/*
 * https://de.wikipedia.org/wiki/Bubblesort
 *
 * bubbleSort(Array A)
  for (n = A.size; n > 1; n = n - 1) { // äußere Schleife
    for (i = 0; i < n - 1; i = i + 1) { // innere Schleife
      if (A[i] > A[i + 1]) {
        A.swap(i, i + 1)
      }
    }
  }
 */

void Bubble::bubbleSortA(int arr[], int size) {
for(int i = size; i > 1; i = i-1 ){
    for (int j = 0; j < i - 1; j = j+1 ) {
        if(arr[j] > arr[j+1]){
            std::swap(arr[j], arr[j+1]);
        }
    }
}
}

void Bubble::bubbleSortB(int arr[], int size) {

}

void Bubble::displayArray(int arr[], int size) {
    std::cout << "Bubblesort: " << std::endl;
    SortAlgorithm::displayArray(arr, size);
}