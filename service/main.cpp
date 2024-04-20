#include "../sorters/insertionSort/insertionSortCall.h"
#include "../sorters/quickSort/quickSortCall.h"
#include "../service/fileLoader.h"
#include "../sorters/shellSort/shellSort.h"
#include <iostream>
#include <sstream>

using namespace std;


template<typename T>
void printArray(int size,string& filename){
    cout << "Would u like to load the sorted array from file? 1 - yes";
    int a;
    T *tab2 = new T[size];
    fileLoader<T> fileLoader2(size, tab2);
    cin >> a;
    switch(a) {
        case 1:
            fileLoader2.loadFromFile(filename);
    }
    delete[] tab2;
}
template<typename T>
T* sortArray(T* tab, int size, string& filename) {
    fileLoader<T> fileLoader1(size, tab);
    for(int i = 0; i < size; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
    while(true) {
        int waySort;
        cout << endl
             << "How would u like to sort your array? 1 - quickSort, 2 - shellSort, 3 - heapSort, 4 - insertionSort";
        cin >> waySort;

        int pivot;
        QuickSort quickSort1;
        ShellSort shell;
        HeapSort heap;
        InsertionSort insert;

        switch (waySort) {
            case 1:
                cout << "What type of pivot do u want? 1 - right, 2 - middle, 3 - left, 4 - random";
                cin >> pivot;
                quickSort1.sorter(tab, size, pivot);
                break;
            case 2:
                shell.shellSort(tab, size);
                break;
            case 3:
                heap.heapSort(tab, size);
                break;
            case 4:
                insert.sort(tab, size);
                break;
        }
        fileLoader1.saveToFile(filename);
        printArray<T>(size,filename);
    }
//    return tab;
}


template<typename T>
void generateArray(int size) {
    ArrayGenerator arrayGenerator;
    T *tab;
    int sortedData;
    cout << "How whould data be sorted? 1 - descending, 2 - sorted 33%, 3 - sorted 66%, 4 - sorted, 5 - non sorted";
    cin >> sortedData;
    switch (sortedData) {
        case 1:
            tab = arrayGenerator.descendingArray<T>(size);
            break;
        case 2:
            tab = arrayGenerator.partially33SortedArray<T>(size);
            break;
        case 3:
            tab = arrayGenerator.partially66SortedArray<T>(size);
            break;
        case 4:
            tab = arrayGenerator.sortedArray<T>(size);
            break;
        case 5:
            tab = arrayGenerator.normalArray<T>(size);
            break;
    }

    cout << "Your array is: " << " ";
    for (int i = 0; i < size; i++) {
        cout << tab[i] << " ";
    }
    std::string filename = "/Users/krystynanowak/Desktop/AIZO1/tablica.txt";

//    delete[] tab2;
    sortArray(tab,size,filename);
    }


void menu(){
    int typeOfData;
    int size;

    cout << "An array of what size would u like to generate? (between 15 - 30)";
    cin >> size;
    cout << "What type of data? 1 - int, 2 - float";
    cin >> typeOfData;

    switch(typeOfData) {
        case 1:
            generateArray<int>(size);
            break;
        case 2:
            generateArray<float>(size);
            break;

    }

}

void loadedFromFile(){
    string filename;
    int* array = new int;
    fileLoader<int> fileloader1(0,array);
    cout<<"Whats the name of the file? ";
    cin >> filename;
    int size = fileloader1.loadFromNewFile(filename);
//    for(int i = 0; i < size; i++){
//        cout << "ARRAY " << array[i] << " ";
//    }
    sortArray(array,size,filename);
    delete array;
}


int main() {
    int a;
    cout << "Would u like to generate a new array (1) or load existing array from file (2)?";
    cin >> a;
    switch(a) {
        case 1:
            menu();
            break;
        case 2:
            loadedFromFile();
            break;
    }
}





//menu - TODO
//wczytanie danych z pliku i wyswietlenie tablicy przed i po sortowaniu - TODO
//zapisywanie do pliku tablicy -
//generacja tablicy o zadanej wielkosci i sortowaniu -



//
//void quickSort(){
//    cout << "QuickSort:" << endl;
//    qqq qqq;
//    int size2 = 10000;
//    for(int i = 1; i < 8; i++){
//        int size = size2*i;
//        qqq.quickSortPartially33(size,4);
//        qqq.quickSortPartially66(size,4);
//        qqq.quickSortSorted(size,4);
//        qqq.quickSortDescending(size,4);
//        qqq.quickSortRandom(size,4);
//    }
//}
//
//void insertionSort(){
//    cout << "InsertionSort:" << endl;
//    insertionSortCall insertionSortCall;
//    int size2 = 10000;
//    for(int i = 1; i < 8; i++){
//        int size = size2*i;
//        cout << "tu" << size;
//        insertionSortCall.insertionSortPartially33(size);
//        insertionSortCall.insertionSortPartially66(size);
//        insertionSortCall.insertionSortDescending(size);
//        insertionSortCall.insertionSortSorted(size);
//        insertionSortCall.insertionSortRandom(size);
//    }
//}
//
//void heapSort(){
//    cout << "HeapSort:" << endl;
//    heapSortCall heapSortCall;
//    int size = 10000;
//    for(int i = 0; i < 7; i++){
//        heapSortCall.heapSortPartially33(size);
//        heapSortCall.heapSortPartially66(size);
//        heapSortCall.heapSortDescending(size);
//        heapSortCall.heapSortSorted(size);
//        heapSortCall.heapSortRandom(size);
//        size = size*2;
//    }
//}
//
//void shellSort(){
//    cout << "ShellSort:" << endl;
//    shellSortCall shellSortCall;
//    int size = 10000;
//    for(int i = 0; i < 7; i++){
//        shellSortCall.shellSortPartially33(size);
//        shellSortCall.shellSortPartially66(size);
//        shellSortCall.shellSortDescending(size);
//        shellSortCall.shellSortSorted(size);
//        shellSortCall.shellSortRandom(size);
//        size = size*2;
//    }
//}
