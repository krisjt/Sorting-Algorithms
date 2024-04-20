#include "quickSortCall.h"
#include "quickSort.h"
#include <time.h>
#include <cstdio>

qqq::qqq() {}
qqq::~qqq() {}

void qqq::quickSortRandom(int size,int a){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/quickSortRandom.csv";
    int* tab = arrayGeneratorQuick.normalArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick.sorter(tab,size,a);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plikQuick.addToFile(string,fileName);

    delete []string;
    arrayGeneratorQuick.deleteArray(tab);
}

void qqq::quickSortDescending(int size,int a){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/quickSortDescending.csv";
    int* tab = arrayGeneratorQuick.descendingArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick.sorter(tab,size,a);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plikQuick.addToFile(string,fileName);

    delete []string;
    arrayGeneratorQuick.deleteArray(tab);
}

void qqq::quickSortPartially33(int size,int a){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/quickSortPartially33.csv";
    int* tab = arrayGeneratorQuick.partially33SortedArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick.sorter(tab,size,a);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plikQuick.addToFile(string,fileName);

    delete []string;
    arrayGeneratorQuick.deleteArray(tab);
}

void qqq::quickSortPartially66(int size,int a){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/quickSortPartially66.csv";
    int* tab = arrayGeneratorQuick.partially66SortedArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick.sorter(tab,size,a);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plikQuick.addToFile(string,fileName);

    delete []string;
    arrayGeneratorQuick.deleteArray(tab);
}

void qqq:: quickSortSorted(int size,int a){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/quickSortSorted.csv";
    int* tab = arrayGeneratorQuick.sortedArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick.sorter(tab,size,a);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plikQuick.addToFile(string,fileName);

    delete []string;
    delete []tab;
}
