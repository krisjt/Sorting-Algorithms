//
// Created by Krystyna Nowak on 12/04/2024.
//

#ifndef AIZO1_HEAPSORTCALL_H
#define AIZO1_HEAPSORTCALL_H


class heapSortCall {
public:
    heapSortCall();
    ~heapSortCall();

    void heapSortRandom(int size);
    void heapSortDescending(int size);
    void heapSortPartially33(int size);
    void heapSortPartially66(int size);
    void heapSortSorted(int size);
};


#endif //AIZO1_HEAPSORTCALL_H
