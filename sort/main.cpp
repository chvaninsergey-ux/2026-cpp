#include "sort.h"
#include <iostream>

void printArray(const int* arr, int n) {
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << ' ';
    std::cout << '\n';
}

void copyArray(const int* src, int* dst, int n) {
    for (int i = 0; i < n; ++i)
        dst[i] = src[i];
}

int main() {
    const int n = 10;
    int original[n] = { 42, 7, 19, 3, 88, 1, 56, 23, 14, 9 };
    int work[n];

    std::cout << "ishodniy massiv:\n";
    printArray(original, n);
    std::cout << '\n';

    copyArray(original, work, n);
    bubbleSort(work, n);
    std::cout << "bubbleSort:    ";
    printArray(work, n);

    copyArray(original, work, n);
    insertionSort(work, n);
    std::cout << "insertionSort: ";
    printArray(work, n);

    copyArray(original, work, n);
    selectionSort(work, n);
    std::cout << "selectionSort: ";
    printArray(work, n);

    copyArray(original, work, n);
    quickSort(work, n);
    std::cout << "quickSort:     ";
    printArray(work, n);

    copyArray(original, work, n);
    mergeSort(work, n);
    std::cout << "mergeSort:     ";
    printArray(work, n);

    copyArray(original, work, n);
    heapSort(work, n);
    std::cout << "heapSort:      ";
    printArray(work, n);

    return 0;
}