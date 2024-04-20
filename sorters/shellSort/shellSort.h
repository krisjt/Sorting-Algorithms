#ifndef AIZO1_SHELLSORT_H
#define AIZO1_SHELLSORT_H


class ShellSort {
public:
ShellSort();
~ShellSort();

    template<typename T>
    int shellSort(T* arr, int n) {
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i += 1) {
                int temp = arr[i];
                int j;
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                    arr[j] = arr[j - gap];
                arr[j] = temp;
            }
        }
        return 0;
    }

};


#endif //AIZO1_SHELLSORT_H
