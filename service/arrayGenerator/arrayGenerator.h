#ifndef AIZO1_ARRAYGENERATOR_H
#define AIZO1_ARRAYGENERATOR_H


#include <cstdlib>
#include "../../sorters/heapSort/heapSort.h"
#include "/Users/krystynanowak/Desktop/AIZO1/service/quickSortDescending/quickSortDescending.h"
#include "../../sorters/insertionSort/insertionSort.h"


class ArrayGenerator {
public:
    ArrayGenerator();
    ~ArrayGenerator();

    template<typename T>
    T* normalArray(int size){
        T* tab = new T[size];
        for (int i = 0; i < size; i++) {
            tab[i] = rand() % size;
        }
        return tab;
    }

    template<typename T>
    T* sortedArray(int size){
        InsertionSort *quickSort1 = new InsertionSort();
        T *tab = normalArray<T>(size);
        quickSort1-> sort(tab,size);
        delete quickSort1;
        return tab;
    }
    template<typename T>
    T* descendingArray(int size){
        QuickSortDescending *quickSortDescending = new QuickSortDescending();
        T *tab = normalArray<T>(size);
        quickSortDescending->template sorter<T>(tab,size);
        delete quickSortDescending;
        return tab;
    }

    template<typename T>
    T* partially33SortedArray(int size){
        int tabSortedSize = size / 3;
        InsertionSort *quickSort = new InsertionSort();
        T *tab = normalArray<T>(size);
        T *tabSorted = new T[tabSortedSize];
        for (int i = 0; i < tabSortedSize; i++) {
            tabSorted[i] = tab[i];
        }
        quickSort -> sort(tabSorted,tabSortedSize);
        for (int i = 0; i < tabSortedSize; i++) {
            tab[i] = tabSorted[i];
        }

        delete quickSort;
        delete[] tabSorted;
        return tab;
    }

    template<typename T>
    T* partially66SortedArray(int size){
        int tabSortedSize = 2* (size / 3);
        InsertionSort *quickSort = new InsertionSort();
        T *tab = normalArray<T>(size);
        T *tabSorted = new T[tabSortedSize];
        for (int i = 0; i < tabSortedSize; i++) {
            tabSorted[i] = tab[i];
        }
        quickSort -> sort(tabSorted,tabSortedSize);
        for (int i = 0; i < tabSortedSize; i++) {
            tab[i] = tabSorted[i];
        }

        delete quickSort;
        delete[] tabSorted;
        return tab;
    }

    void deleteArray(int *tab);
};

#endif //AIZO1_ARRAYGENERATOR_H
