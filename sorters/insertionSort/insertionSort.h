#ifndef AIZO1_INSERTIONSORT_H
#define AIZO1_INSERTIONSORT_H

class InsertionSort {
public:
    InsertionSort();
    ~InsertionSort();

    int arraySize;

    template<typename T>
    T* sort(T* arr, int size){
        T key;
        int i, j;
        for (i = 1; i < size; i++) {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
        return arr;
    }

};

#endif //AIZO1_INSERTIONSORT_H
