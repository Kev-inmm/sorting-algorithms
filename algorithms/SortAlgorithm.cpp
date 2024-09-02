//
// Created by kevin on 02.09.2024.
//

#include "SortAlgorithm.h"


void SortAlgorithm::displayArray(int arr[], int size) {
        for(int i = 0; i < size; i++){
            std::cout << arr[i] << ", ";
        }
        std::cout << std::endl;
        std::cout << "------" << std::endl;
}

int* SortAlgorithm::createArray(int size, bool rdm) {
    int* arr = new int[size];
    std::string text = "";

    if(rdm){
        std::srand(static_cast<unsigned int>(std::time(nullptr)));

        for(int i = 0; i < size; i++){
            arr[i] = std::rand();
        }
        text = "Unsortetd";
    }

    if(!rdm){
        for(int i = 0; i < size; i++){
            arr[i] = i;
        }
        text = "Sorteted";
    }



    std::cout << text << " Array created: " << std::endl;
    displayArray(arr, size);

    return arr;

}