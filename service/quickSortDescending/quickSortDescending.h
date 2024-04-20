#ifndef AIZO1_QUICKSORTDESCENDING_H
#define AIZO1_QUICKSORTDESCENDING_H


class QuickSortDescending {
public:

    QuickSortDescending();
    ~QuickSortDescending();

//    template<typename T>
//    int partition(T *tab, int left, int right);
//    template<typename T>
//    void quickSort(T *tab, int size);
    template<typename T>
    int partition(T *tab, int left, int right) {
        T pivot = tab[left];
        int l = left;
        int r = right;
        while (true) {
            while (tab[l] > pivot) ++l;
            while (tab[r] < pivot) --r;
            if (l < r) {
                T o = tab[r];
                tab[r] = tab[l];
                tab[l] = o;
                ++l;
                --r;
            } else {
                if (r == right) r--;
                return r;
            }
        }
    }
    template<typename T>
    void quickSort(T *tab, int l, int p) {
        if (l >= p) return;
        int m = partition(tab, l, p);
        quickSort(tab, l, m);
        quickSort(tab, m + 1, p);
    }

    template<typename T>
    void sorter(T *tab, int size) {
        quickSort(tab, 0, size - 1);
    }
    };

#endif //AIZO1_QUICKSORTDESCENDING_H
