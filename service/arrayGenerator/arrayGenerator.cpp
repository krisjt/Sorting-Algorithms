#include "arrayGenerator.h"
using namespace std;

ArrayGenerator::ArrayGenerator(){}
ArrayGenerator::~ArrayGenerator(){}

//template<typename T>
//T* ArrayGenerator::normalArray(int size){
//    T* tab = new T[size];
//    for (int i = 0; i < size; i++) {
//        tab[i] = rand() % size;
//    }
//    return tab;
//}
//
void ArrayGenerator::deleteArray(int *tab){
    delete []tab;
}
//
//template<typename T>
//T* ArrayGenerator::sortedArray(int size){
//    QuickSort *quickSort1 = new QuickSort();
//    T *tab = normalArray<T>(size);
//    quickSort1->sorter<T>(tab,size);
//    delete quickSort1;
//    return tab;
//}
//template<typename T>
//T* ArrayGenerator::descendingArray(int size){
//    QuickSortDescending *quickSortDescending = new QuickSortDescending();
//    T *tab = normalArray<T>(size);
//    quickSortDescending->sorter<T>(tab,size);
//    delete quickSortDescending;
//    return tab;
//}
//
//template<typename T>
//T* ArrayGenerator::partially33SortedArray(int size){
//    int tabSortedSize = size / 3;
//    QuickSort *quickSort = new QuickSort();
//    T *tab = normalArray<T>(size);
//    T *tabSorted = new T[tabSortedSize];
//    for (int i = 0; i < tabSortedSize; i++) {
//        tabSorted[i] = tab[i];
//    }
//    quickSort ->sorter<T>(tabSorted,tabSortedSize);
//    for (int i = 0; i < tabSortedSize; i++) {
//        tab[i] = tabSorted[i];
//    }
//
//    delete quickSort;
//    delete[] tabSorted;
//    return tab;
//}
//
//template<typename T>
//T* ArrayGenerator::partially66SortedArray(int size){
//    int tabSortedSize = 2* (size / 3);
//    QuickSort *quickSort = new QuickSort();
//    T *tab = normalArray<T>(size);
//    T *tabSorted = new T[tabSortedSize];
//    for (int i = 0; i < tabSortedSize; i++) {
//        tabSorted[i] = tab[i];
//    }
//    quickSort ->sorter<T>(tabSorted,tabSortedSize);
//    for (int i = 0; i < tabSortedSize; i++) {
//        tab[i] = tabSorted[i];
//    }
//
//    delete quickSort;
//    delete[] tabSorted;
//    return tab;
//}

//int main(){
//////    int *tab = normalArray(15);
//////    deleteArray(tab);
//////    int *tab2 = descendingArray(15);
//////    deleteArray(tab2);
//////    int *tab3 = sortedArray(15);
//////    deleteArray(tab3);
//    int* tab4 = partially66SortedArray(15);
//    deleteArray(tab4);
//}