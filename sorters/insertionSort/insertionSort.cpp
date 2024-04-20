#include "insertionSort.h"
//#include <iostream>
//
//using namespace std;
//
//    int arraySize;
//
    InsertionSort::InsertionSort(){
    }
    InsertionSort::~InsertionSort() {}
//
//


//    void InsertionSort::main2() {
//        CorrectionTest correctionTest;
//        int arr[arraySize];
//        float arr2[arraySize];
//        int rand;
//        for(int i = 0; i < arraySize; i++){
//            rand = random()%10000;
//            arr[i] = rand;
//            arr2[i] = rand;
//        }
//        int N = sizeof(arr) / sizeof(arr[0]);
//        int N2 = sizeof(arr2) / sizeof(arr2[0]);
//
//        int time = clock();
//        sort<int>(arr, N);
//        cout<<"Time when int = " << ((float)clock()-time)/CLOCKS_PER_SEC << " seconds." << endl;
//        int time2 = clock();
//        sort<float>(arr2, N2);
//        cout<<"Time when float = "<<((float)(clock()-time2))/CLOCKS_PER_SEC << " seconds." << endl;
//    }