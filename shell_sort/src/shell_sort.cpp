#include "../include/shell_sort.h"
#include "../../insertion_sort/include/insertion_sort.h"

void shell(vector <int> &list){

    // Holds the length of the list
    size_t tam = list.size();

    size_t gap = tam;

    for (size_t i = 0; i < tam; i++){

        gap /= 2;
        
        for (size_t j = 0; j < tam-gap; j++){

            if (list.at(j) > list.at(j+gap)){
                int aux = list.at(j);
                list.at(j) = list.at(j+gap);
                list.at(j+gap) = aux;
            }
        }
    }

    insertion(list);
}