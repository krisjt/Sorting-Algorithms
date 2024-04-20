#include "insertionSortCall.h"
#include "insertionSort.h"
#include <time.h>
#include <cstdio>
#include <iostream>

using namespace std;


insertionSortCall::insertionSortCall() {}
insertionSortCall::~insertionSortCall() {}


void insertionSortCall::insertionSortRandom(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/insertionSortRandom.txt";
    InsertionSort *insertionSort = new InsertionSort;
    float* tab = arrayGeneratorInsertion.normalArray<float>(size);
    char* string = new char[1000];
    int time = clock();

    insertionSort->sort<float>(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, float, time = %f", size, time1);
    plikInsertion.addToFile(string,fileName);
    delete tab;


    int* tab2 = arrayGeneratorInsertion.normalArray<int>(size);
    char* string2 = new char[1000];
    time = clock();

    insertionSort->sort<int>(tab2,size);

    float time2 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string2, 1000, "Size = %d, int, time = %f", size, time2);
    plikInsertion.addToFile(string2,fileName);

    delete insertionSort;
    delete []string;
    arrayGeneratorInsertion.deleteArray(tab2);
}

void insertionSortCall::insertionSortDescending(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/insertionSortDescending.txt";
    InsertionSort *insertionSort = new InsertionSort;
    float* tab = arrayGeneratorInsertion.descendingArray<float>(size);
    char* string = new char[1000];
    int time = clock();

    insertionSort->sort<float>(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, float, time = %f", size, time1);
    plikInsertion.addToFile(string,fileName);
    delete tab;


    int* tab2 = arrayGeneratorInsertion.descendingArray<int>(size);
    char* string2 = new char[1000];
    time = clock();

    insertionSort->sort<int>(tab2,size);

    float time2 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string2, 1000, "Size = %d, int, time = %f", size, time2);
    plikInsertion.addToFile(string2,fileName);

    delete insertionSort;
    delete []string;
    arrayGeneratorInsertion.deleteArray(tab2);
}

void insertionSortCall::insertionSortPartially33(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/insertionSortPartially33.txt";
    InsertionSort *insertionSort = new InsertionSort;
    float* tab = arrayGeneratorInsertion.partially33SortedArray<float>(size);
    char* string = new char[1000];
    int time = clock();

    insertionSort->sort<float>(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, float, time = %f", size, time1);
    plikInsertion.addToFile(string,fileName);
    delete tab;


    int* tab2 = arrayGeneratorInsertion.partially33SortedArray<int>(size);
    char* string2 = new char[1000];
    time = clock();

    insertionSort->sort<int>(tab2,size);

    float time2 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string2, 1000, "Size = %d, int, time = %f", size, time2);
    plikInsertion.addToFile(string2,fileName);

    delete insertionSort;
    delete []string;
    arrayGeneratorInsertion.deleteArray(tab2);
}

void insertionSortCall::insertionSortPartially66(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/insertionSortPartially66.txt";
    InsertionSort *insertionSort = new InsertionSort;
    float* tab = arrayGeneratorInsertion.partially66SortedArray<float>(size);
    char* string = new char[1000];
    int time = clock();

    insertionSort->sort<float>(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, float, time = %f", size, time1);
    plikInsertion.addToFile(string,fileName);
    delete tab;


    int* tab2 = arrayGeneratorInsertion.partially66SortedArray<int>(size);
    char* string2 = new char[1000];
    time = clock();

    insertionSort->sort<int>(tab2,size);

    float time2 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string2, 1000, "Size = %d, int, time = %f", size, time2);
    plikInsertion.addToFile(string2,fileName);

    delete insertionSort;
    delete []string;
    arrayGeneratorInsertion.deleteArray(tab2);
}

void insertionSortCall::insertionSortSorted(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/insertionSortSorted.txt";
    InsertionSort *insertionSort = new InsertionSort;
    float* tab = arrayGeneratorInsertion.sortedArray<float>(size);
    char* string = new char[1000];
    int time = clock();

    insertionSort->sort<float>(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, float, time = %f", size, time1);
    plikInsertion.addToFile(string,fileName);
    delete tab;


    int* tab2 = arrayGeneratorInsertion.sortedArray<int>(size);
    char* string2 = new char[1000];
    time = clock();

    insertionSort->sort<int>(tab2,size);

    float time2 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string2, 1000, "Size = %d, int, time = %f", size, time2);
    plikInsertion.addToFile(string2,fileName);

    delete insertionSort;
    delete []string;
    arrayGeneratorInsertion.deleteArray(tab2);
}
