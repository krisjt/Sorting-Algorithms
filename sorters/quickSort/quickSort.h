#ifndef AIZO1_QUICKSORT_H
#define AIZO1_QUICKSORT_H
#include <algorithm>
#include <iostream>

using namespace std;

class QuickSort {
public:

    QuickSort();
    ~QuickSort();

//    template<typename T>
//    int partition(T *tab, int left, int right);
//
//    template<typename T>
//    void quickSort(T *tab, int l, int p);
//
//    template<typename T>
//    void sorter(T *tab, int size);

    template<typename T>
    int partition(T* tab, int left, int right, int a) {
        int pivotIndex;
        switch(a){
            case 1:
                pivotIndex = right;
                break;
            case 2:
                pivotIndex = (left+right)/2;
                break;
            case 3:
                pivotIndex = left;
                break;
            case 4:
                srand(time(nullptr)); // Seed for random number generation
                pivotIndex = rand() % (right - left + 1) + left; // Random pivot
                break;
        }
        T pivot = tab[pivotIndex];
        int l = left;
        int r = right;
        while (true) {
            while (tab[l] < pivot) ++l;
            while (tab[r] > pivot) --r;
            if (l < r) {
//                swap(tab[l], tab[r]);
                T o = tab[r];
                tab[r] = tab[l];
                tab[l] = o;
                ++l;
                --r;
            } else {
                if (r == right) r--;
                return r;
            }
        }
    }

    template<typename T>
    void quickSort(T* tab, int l, int p, int a) {
        if (l >= p) return;
        int m = partition(tab, l, p, a);
        quickSort(tab, l, m,a);
        quickSort(tab, m + 1, p,a);
    }

    template<typename T>
    void sorter(T *tab, int size, int a) {
        quickSort(tab, 0, size - 1,a);
    }
};
#endif //AIZO1_QUICKSORT_H
