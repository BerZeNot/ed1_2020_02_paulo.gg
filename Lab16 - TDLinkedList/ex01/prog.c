#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDLinkedList.h"

int main(){
    printf("<< Main Program >>\n");

    struct student stdts[5];

    { // I used curly brackets to be able to hide this part of code between it;

        // Student 1
        strcpy(stdts[0].name, "Adamastor");
        stdts[0].registration = 1201101;
        stdts[0].n1 = 10;
        stdts[0].n2 = 9.5;
        stdts[0].n3 = 8.6;

        // Student 2
        strcpy(stdts[1].name, "Bentosvaldo");
        stdts[1].registration = 1201102;
        stdts[1].n1 = 7;
        stdts[1].n2 = 10;
        stdts[1].n3 = 10;
        
        // Student 3
        strcpy(stdts[2].name, "Cenilda");
        stdts[2].registration = 1201103;
        stdts[2].n1 = 3.9;
        stdts[2].n2 = 10;
        stdts[2].n3 = 10;
        
        // Student 4
        strcpy(stdts[3].name, "Dinorá");
        stdts[3].registration = 1201104;
        stdts[3].n1 = 6.7;
        stdts[3].n2 = 7.2;
        stdts[3].n3 = 9.2;

        // Student 5
        strcpy(stdts[4].name, "Epitácio");
        stdts[4].registration = 1201105;
        stdts[4].n1 = 9.2;
        stdts[4].n2 = 10;
        stdts[4].n3 = 7;
    }
    

    TDLinkedList *list;
    list = list_create();

    // for(int i=0; i<5; i++)
    //     list_push_front(list, stdts[i]);

    for(int i=0; i<5; i++)
        list_push_back(list, stdts[i]);

    list_print_foward(list);

    int listSize;
    listSize = list_size(list);
    printf("\n<< List size: %d >>\n", listSize);
    return 0;
}