//
// Created by kevin on 03.09.2024.
//

#include "Merge.h"

/*
 * https://de.wikipedia.org/wiki/Mergesort
 *
 * function merge_sort(list x)
    if length(x) ≤ 1 then
        return x      // Kurzes x ist trivialerweise sortiert.
    var l := empty list
    var r := empty list
    var nx := length(x)−1
    // Teile x in die zwei Hälften l und r ...
    for i := 0 to floor(nx/2) do
        append x[i] to l
    for i := floor(nx/2)+1 to nx do
        append x[i] to r
    // ... und sortiere beide (einzeln).
    l := merge_sort(l)
    r := merge_sort(r)
    // Verschmelze die sortierten Hälften.
    return merge(l, r)
 */

void Merge::mergeSort(int arr[], int size) {
    if(size <= 1){
        return;
    }


    int mid = size / 2;
    int leftSize = mid;
    int rightSize = size - mid;

    int* l = new int[leftSize];
    int* r = new int[rightSize];

    for(int i = 0; i < leftSize; i++){
        l[i] = arr[i];
    }

    for (int i = 0; i < rightSize; i++) {
        r[i] = arr[mid + i];
    }

    mergeSort(l, leftSize);
    mergeSort(r, rightSize);

    merge(arr, l, leftSize, r, rightSize);

    delete[] l;
    delete[] r;

}

/*
 * https://de.wikipedia.org/wiki/Bubblesort
 *
 * function merge(list l, list r)
    var y := empty list    // Ergebnisliste
    var nl := length(l)−1
    var nr := length(r)−1
    var il := 0
    for i := 0 to nl+nr+1 do
        if il > nl then
            append r[i−il] to y
            continue
        if il < i−nr then
            append l[il] to y
            il := il+1
            continue
        // Jetzt ist 0 ≤ il ≤ nl und 0 ≤ i−il ≤ nr.
        if l[il] ≤ r[i−il] then
            append l[il] to y
            il := il+1
        else
            append r[i−il] to y
    return y
 */

void Merge::merge(int arr[],int arrL[], int lSize, int arrR[], int rSize){
    int* y = new int[lSize + rSize];  // Ergebnisarray
    int nl = lSize - 1;
    int nr = rSize - 1;
    int il = 0;  // Index für das linke Array
    int i = 0;   // Index für das Ergebnisarray

    for (i = 0; i < lSize + rSize; i++) {
        if (il > nl) {
            y[i] = arrR[i - il];
        } else if (i - il > nr) {
            y[i] = arrL[il++];
        } else if (arrL[il] <= arrR[i - il]) {
            y[i] = arrL[il++];
        } else {
            y[i] = arrR[i - il];
        }
    }

    // Kopieren des sortierten Inhalts zurück in das ursprüngliche Array
    for (i = 0; i < lSize + rSize; i++) {
        arr[i] = y[i];
    }

    delete[] y;  // Freigeben des temporären Ergebnisarrays


}

void Merge::displayArray(int arr[], int size) {
    std::cout << "Mergesort :" << std::endl;
    SortAlgorithm::displayArray(arr, size);

}
