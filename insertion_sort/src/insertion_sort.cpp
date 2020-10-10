#include "../include/insertion_sort.h"

void insertion(vector <int> &list){

    //  Holds the size of the list
    size_t tam = list.size();

    // Runs across the list
    for (size_t i = 1; i < tam; i++){

        //  Set the element to be compared next
        int key = list.at(i);

        //  Insert the key in the proper place in the list 
        size_t j = i;
        while (j > 0 && key < list.at(j-1)){
            list.at(j) = list.at(j-1);
            j--;
        }

        list.at(j) = key;
    
    }
}