#include "../include/insertion_sort.h"

int main (){

    vector <int> list {78, 16, 47, 5, 54, 0, 99, 54, 25, 63, 2, 30, 6};

    //  Evaluates the length of the list
    size_t tam = list.size();

    //  Prints the unsorted list
    for (size_t i = 0; i < tam; i++){
        cout << " " << list.at(i);
    }
    cout << endl;

    insertion(list);

    //  Prints the sorted list
    for (size_t i = 0; i < tam; i++){
        cout << " " << list.at(i);
    }
    cout << endl;
    
}