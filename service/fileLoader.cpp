#include "fileLoader.h"
#include <fstream>
#include <sstream>
#include <iostream>

//using namespace std;

//template<typename T>
//fileLoader<T>::fileLoader(T initialSize, T *tab){
//    size = initialSize;
//    array = tab;
//}
//
//template<typename T>
//fileLoader<T>::~fileLoader(){
//}

//void loadFromFile(string& filename) {
//    ifstream file(filename); // Open the file
//    if (!file.is_open()) {
//        cerr << "Failed to open file: " << filename << endl;
//        return;
//    }
//
//    string line;
////    if (getline(file, line)) {
////        stringstream(line) >> size;
////        array = new int[size];
////    }
//
//    int i = 0;
//    // Start reading from the second line (after reading the size)
//    while (getline(file, line) && i < size) {
//        stringstream(line) >> array[i++];
//    }
//
//    file.close();
//
//    // Debug output to print the contents of the array
//    cout << "Loaded data from file: ";
//    for (int j = 0; j < size; ++j) {
//        cout << array[j] << " ";
//    }
//    cout << endl;
//}
//
//
//
//void saveToFile(string& filename) {
//    ofstream file(filename); // Tworzy obiekt ofstream z nazwą pliku
//    if (!file.is_open()) {
//        cerr << "Nie udało się otworzyć pliku do zapisu: " << filename << endl;
//        return;
//    }
//
//    for (int i = 0; i < size; ++i) {
//        file << array[i] << endl;
//    }
//
//    file.close();
//}
//
//
//void print() {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << endl;
//    }
//}
