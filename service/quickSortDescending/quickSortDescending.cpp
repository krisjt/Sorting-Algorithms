#include "quickSortDescending.h"

using namespace std;

QuickSortDescending::QuickSortDescending(){
}
QuickSortDescending::~QuickSortDescending(){}


//template<typename T>
//int QuickSortDescending::partition(T *tab, int left, int right) {
//    T pivot = tab[left];
//    int l = left;
//    int r = right;
//    while (true) {
//        while (tab[l] > pivot) ++l;
//        while (tab[r] < pivot) --r;
//        if (l < r) {
//            swap(tab[l], tab[r]);
//            ++l;
//            --r;
//        } else {
//            if (r == right) r--;
//            return r;
//        }
//    }
//}
//template<typename T>
//void QuickSortDescending::quickSort(T *tab, int size) {
//    int l = 0;
//    int p = size -1;
//    if (l >= p) return;
//    int m = partition(tab, l, p);
//    quickSort(tab, l, m);
//    quickSort(tab, m + 1, p);
//}




