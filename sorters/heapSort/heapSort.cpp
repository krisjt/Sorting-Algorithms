#include "heapSort.h"
#include <iostream>
using namespace std;

int size;

HeapSort::HeapSort(){
}
HeapSort::~HeapSort(){}




//int HeapSort::main(){
//    CorrectionTest correctionTest;
//    int arr[size];
//    for(int i = 0; i < size; i++){
//        arr[i] = random() % size;
//    }
//    int N = sizeof(arr) / sizeof(arr[0]);
//
//    int time = clock();
//    heapSort(arr, N);
//    cout<<"Time of sorting is " << ((float)clock()-time)/CLOCKS_PER_SEC << " seconds.\n";
//
//    if(correctionTest.isRight<int>(arr,size))cout<<"The array has been sorted correctly.\n";
//    else cout << "The arrays order is incorrect.\n";
//
////    cout << "Sorted array is \n";
////    printArray(arr, N);
//}
