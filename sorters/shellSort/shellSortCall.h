#ifndef AIZO1_SHELLSORTCALL_H
#define AIZO1_SHELLSORTCALL_H
#include "../../service/arrayGenerator/arrayGenerator.h"
#include "../../service/fileHandler/plik.h"



class shellSortCall {
public:
    ArrayGenerator arrayGenerator;
    Plik plik;

    shellSortCall();
    ~shellSortCall();

    void shellSortRandom(int size);
    void shellSortDescending(int size);
    void shellSortPartially33(int size);
    void shellSortPartially66(int size);
    void shellSortSorted(int size);
};


#endif //AIZO1_SHELLSORTCALL_H
