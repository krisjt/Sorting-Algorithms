#ifndef AIZO1_QQQ_H
#define AIZO1_QQQ_H
#include "../../service/arrayGenerator/arrayGenerator.h"
#include "../../service/fileHandler/plik.h"
#include "quickSort.h"

class qqq {

    ArrayGenerator arrayGeneratorQuick;
    Plik plikQuick;
    QuickSort quick;

public:

    qqq();
    ~qqq();
//
    void quickSortRandom(int size, int a);
    void quickSortDescending(int size,int a);
    void quickSortPartially33(int size,int a);
    void quickSortPartially66(int size,int a);
    void quickSortSorted(int size,int a);};


#endif //AIZO1_QQQ_H
