#include "../include/shell_sort.hpp"
#include "../../insertion_sort/include/insertion_sort.hpp"

void shell(vector <int> &list){

    //  Holds the length of the list
    size_t tam = list.size();

    //  Sets the gap for comparison
    size_t gap = tam;

    for (size_t i = 0; i < tam; i++){

        //  Cuts the gap by half
        gap /= 2;
        
        //  Compares the elements according to the current gap
        for (size_t j = 0; j < tam-gap; j++){

            //  Sorts the sublist elements
            if (list.at(j) > list.at(j+gap)){
                int aux = list.at(j);
                list.at(j) = list.at(j+gap);
                list.at(j+gap) = aux;
            }
        }
    }

    insertion(list);
}