#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TLinkedList.h"
int main(){
    printf("<< Main Program >>\n");
    struct aluno al[5];
    // Aluno 0
    strcpy(al[0].nome, "Adamastor");
    al[0].matricula = 1201101;
    al[0].n1 = 10;
    al[0].n2 = 8;
    al[0].n3 = 9;

    // Aluno 1
    strcpy(al[1].nome, "Bertoledo");
    al[1].matricula = 1201102;
    al[1].n1 = 8;
    al[1].n2 = 7;
    al[1].n3 = 10;
    
    // Aluno 2
    strcpy(al[2].nome, "Cenosvaldo");
    al[2].matricula = 1201103;
    al[2].n1 = 10;
    al[2].n2 = 10;
    al[2].n3 = 6;
    
    // Aluno 3
    strcpy(al[3].nome, "Dagoberdo");
    al[3].matricula = 1201104;
    al[3].n1 = 9;
    al[3].n2 = 10;
    al[3].n3 = 5;
    
    // Aluno 4
    strcpy(al[4].nome, "Emanoel");
    al[4].matricula = 1201105;
    al[4].n1 = 4;
    al[4].n2 = 7;
    al[4].n3 = 5;

    TLinkedList *list;
    list = list_create(0);
    int response;

    printf("\n-> LIST PUSH LOG\n");
    for(int i=0; i<5; i++){
        if(i%2 == 1)
            response = list_insert_sorted(list,al[i]);
        else
            response = list_push_back(list,al[i]);
            
        if(response == 0)
            printf("Insertion: al[%d] | Status: SUCESS\n", i);
        
        else if(response == -5)
            printf("Insertion: al[%d] | Status: LIST_SORTED_EXCEPTION\n", i);
        
        else if(response == -6)
            printf("Insertion: al[%d] | Status: LIST_NOT_SORTED_EXCEPTION\n", i);
    }

    printf("\n-> LIST PRINT\n");
    list_print(list);

    printf("\n-> LIST SIZE\n");
    int listSize = list_size(list);
    printf("Size: %d\n", listSize);
    list_pop_back(list);
    printf("After remove last element with list_pop_back\n");
    listSize = list_size(list);
    printf("Size: %d\n", listSize);

    list_print(list);
    
    return 0;
}