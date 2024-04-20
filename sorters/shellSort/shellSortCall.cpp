#include "shellSortCall.h"
#include "shellSort.h"
#include <time.h>
#include <cstdio>

shellSortCall::shellSortCall() {}
shellSortCall::~shellSortCall() {}

void shellSortCall::shellSortRandom(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/shellSortRandom.csv";
    ShellSort *quick = new ShellSort;
    int* tab = arrayGenerator.normalArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick->shellSort(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plik.addToFile(string,fileName);

    delete quick;
    delete []string;
    arrayGenerator.deleteArray(tab);
}

void shellSortCall::shellSortDescending(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/shellSortDescending.csv";
    ShellSort *quick = new ShellSort;
    int* tab = arrayGenerator.descendingArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick->shellSort(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plik.addToFile(string,fileName);

    delete quick;
    delete []string;
    arrayGenerator.deleteArray(tab);
}

void shellSortCall::shellSortPartially33(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/shellSortPartially33.csv";
    ShellSort *quick = new ShellSort;
    int* tab = arrayGenerator.partially33SortedArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick->shellSort(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plik.addToFile(string,fileName);

    delete quick;
    delete []string;
    arrayGenerator.deleteArray(tab);
}

void shellSortCall::shellSortPartially66(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/shellSortPartially66.csv";
    ShellSort *quick = new ShellSort;
    int* tab = arrayGenerator.partially66SortedArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick->shellSort(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plik.addToFile(string,fileName);

    delete quick;
    delete []string;
    arrayGenerator.deleteArray(tab);
}

void shellSortCall:: shellSortSorted(int size){
    char fileName[] = "/Users/krystynanowak/Desktop/AIZO1/shellSortSorted.csv";
    ShellSort *quick = new ShellSort;
    int* tab = arrayGenerator.sortedArray<int>(size);
    char* string = new char[1000];
    int time = clock();

    quick->shellSort(tab,size);

    float time1 = (float)1000*(clock() - time)/CLOCKS_PER_SEC;
    snprintf(string, 1000, "Size = %d, time = %f", size, time1);
    plik.addToFile(string,fileName);

    delete quick;
    delete []string;
    delete []tab;
}
