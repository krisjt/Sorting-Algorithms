#include "plik.h"
#include <stdio.h>


using namespace std;

Plik::Plik() {}
Plik::~Plik() {}
//zapis do pliku

int Plik::addToFile(char string[], char nazwaPliku[]){
    FILE *plik;
    plik = fopen(nazwaPliku,"a+t");
    if(plik != NULL) {
        fprintf(plik, "%s\n", string);
        fclose(plik);
        return 0; // Zwracamy 0, gdy operacja powiedzie się
    }
    else {
        printf("Blad otwarcia pliku\n");
        return -1; // Zwracamy -1, gdy wystąpi błąd
    }
}
//int Plik::addToArraysFile(int name, int size, char beforeState, int* sorted, int* nonSorted){
////        new wayToSort(name,size,beforeState,sorted,nonSorted);
//}

