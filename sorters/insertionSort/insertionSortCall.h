#ifndef AIZO1_INSERTIONSORTCALL_H
#define AIZO1_INSERTIONSORTCALL_H
#include "../../service/arrayGenerator/arrayGenerator.h"
#include "../../service/fileHandler/plik.h"


class insertionSortCall {
public:
    ArrayGenerator arrayGeneratorInsertion;
    Plik plikInsertion;

    insertionSortCall();
    ~insertionSortCall();

    void insertionSortRandom(int size);
    void insertionSortDescending(int size);
    void insertionSortPartially33(int size);
    void insertionSortPartially66(int size);
    void insertionSortSorted(int size);

};

#endif //AIZO1_INSERTIONSORTCALL_H
