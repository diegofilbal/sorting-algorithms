#include "../include/selection_sort.h"

void selection(vector <int> *list){

    //  Evaluates the length of the list
    size_t tam = list->size();
    
    //  Runs across the array
    for (size_t i = 0; i < tam; i++){

        // Set the smallest element as the first element on the list
        int min_value = list->at(i);

        // Holds the smallest element's index
        size_t min_index;

        // Searches for the smallest element in the list
        for (size_t j = i+1; j < tam; j++){
            if (list->at(j) < min_value){ 
                min_value = list->at(j);
                min_index = j;
            }
        }

        int aux = list->at(i);
        list->at(i) = list->at(min_index);
        list->at(min_index) = aux;
    }

}