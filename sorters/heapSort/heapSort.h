
#ifndef AIZO1_HEAPSORT_H
#define AIZO1_HEAPSORT_H


class HeapSort {
public:

    HeapSort();
    ~HeapSort();

    template<typename T>
    void heapify(T* arr, int N, int i){
        int largest = i;

        int l = 2 * i + 1;

        int r = 2 * i + 2;

        if (l < N && arr[l] > arr[largest])
            largest = l;

        if (r < N && arr[r] > arr[largest])
            largest = r;

        if (largest != i) {
            T o = arr[i];
            arr[i] = arr[largest];
            arr[largest] = o;
            heapify(arr, N, largest);
        }
    }

    template<typename T>
    void heapSort(T* arr, int size){
        for (int i = size / 2 - 1; i >= 0; i--)
            heapify(arr, size, i);

        for (int i = size - 1; i > 0; i--) {
            T o = arr[0];
            arr[0] = arr[i];
            arr[i] = o;
            heapify(arr, i, 0);
        }
    }
};


#endif //AIZO1_HEAPSORT_H
