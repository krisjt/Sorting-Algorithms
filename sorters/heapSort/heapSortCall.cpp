//#include "heapSortCall.h"
//#include "heapSort.h"
//#include "../../service/arrayGenerator/arrayGenerator.h"
//#include "../../service/fileHandler/plik.h"
//#include <time.h>
//#include <cstdio>
//
//heapSortCall::heapSortCall() {}
//heapSortCall::~heapSortCall() {}
//
//ArrayGenerator arrayGeneratorHeap;
//Plik plikHeap;
//
//void heapSortCall::heapSortRandom(int size){
//    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/heapSortRandom.txt";
//    HeapSort *quick = new HeapSort;
//    int* tab = arrayGeneratorHeap.normalArray<int>(size);
//    char* string = new char[1000];
//    int time = clock();
//
//    quick->heapSort(tab,size);
//
//    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
//    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
//    plikHeap.addToFile(string,fileName);
//
//    delete quick;
//    delete []string;
//    arrayGeneratorHeap.deleteArray(tab);
//}
//
//void heapSortCall::heapSortDescending(int size){
//    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/heapSortDescending.txt";
//    HeapSort *quick = new HeapSort;
//    int* tab = arrayGeneratorHeap.descendingArray<int>(size);
//    char* string = new char[1000];
//    int time = clock();
//
//    quick->heapSort(tab,size);
//
//    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
//    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
//    plikHeap.addToFile(string,fileName);
//
//    delete quick;
//    delete []string;
//    arrayGeneratorHeap.deleteArray(tab);
//}
//
//void heapSortCall::heapSortPartially33(int size){
//    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/heapSortPartially33.txt";
//    HeapSort *quick = new HeapSort;
//    int* tab = arrayGeneratorHeap.partially33SortedArray<int>(size);
//    char* string = new char[1000];
//    int time = clock();
//
//    quick->heapSort(tab,size);
//
//    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
//    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
//    plikHeap.addToFile(string,fileName);
//
//    delete quick;
//    delete []string;
//    arrayGeneratorHeap.deleteArray(tab);
//}
//
//void heapSortCall::heapSortPartially66(int size){
//    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/heapSortPartially66.txt";
//    HeapSort *quick = new HeapSort;
//    int* tab = arrayGeneratorHeap.partially66SortedArray<int>(size);
//    char* string = new char[1000];
//    int time = clock();
//
//    quick->heapSort(tab,size);
//
//    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
//    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
//    plikHeap.addToFile(string,fileName);
//
//    delete quick;
//    delete []string;
//    arrayGeneratorHeap.deleteArray(tab);
//}
//
//void heapSortCall:: heapSortSorted(int size){
//    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/heapSortSorted.txt";
//    HeapSort *quick = new HeapSort;
//    int* tab = arrayGeneratorHeap.sortedArray<int>(size);
//    char* string = new char[1000];
//    int time = clock();
//
//    quick->heapSort(tab,size);
//
//    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
//    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
//    plikHeap.addToFile(string,fileName);
//
//    delete quick;
//    delete []string;
//    delete []tab;
//}
