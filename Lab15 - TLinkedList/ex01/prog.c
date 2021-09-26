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
    list = list_create();
    
    list_insert_sorted(list,al[3]);
    list_insert_sorted(list,al[1]);
    list_insert_sorted(list,al[0]);
    list_insert_sorted(list,al[2]);
    list_insert_sorted(list,al[4]);
    
    list_print(list);

    /*
    //->Test function list_size()
    int sizeList;
    sizeList = list_size(list);
    printf("List size: %d\n", sizeList);
    
    //->Test function list_pop_front()
    printf("List size: %d\n", list_size(list));
    list_pop_front(list);
    printf("List size: %d\n", list_size(list));
    
    //->Test function list_pop_back()
    list_pop_back(list);
    printf("\n<< Separation >>\n");
    list_print(list);

    // Testing function list_erase_data
    list_erase_data(list, 1201103);
    printf("<< After removing the student whose registration is 12011250 >>\n");
    list_print(list);
    list_erase_pos(list, -2);
    list_print(list);
    
    // Testing the function list_find_pos()
    struct aluno alN;
    int pos;
    for(int i=1; i<=list_size(list); i++){
        pos = i;
        list_find_pos(list, pos, &alN);
        printf("Aluno na posição %d: %s\n", pos, alN.nome);
    }

    // Testing the function list_find_mat()
    struct aluno al_found;
    TLinkedList *lista;
    int response;
    // response = list_find_mat(list, 1201123, &al_found);
    // response = list_find_mat(lista, 1201123, &al_found);
    if(response == -1)
        printf("Invalit list pointer!\n");
    else if(response == -4)
        printf("Student not found!\n");
    else if(response == 0){
        printf("Student found:\n");
        printf("Nome: %s\n", al_found.nome);
        printf("Matrícula: %d\n", al_found.matricula);
        printf("Nota 1: %.2f\n", al_found.n1);
        printf("Nota 2: %.2f\n", al_found.n2);
        printf("Nota 3: %.2f\n", al_found.n3);
    }
    else
        printf("Unknown error! Please, check the params used!\n");


    // Testing the function list_back()
    struct aluno al_found;
    int response;
    response = list_back(list, &al_found);
    if(response == 0){
        printf("Last student: \n");
        printf("Nome: %s\n", al_found.nome);
        printf("Nome: %d\n", al_found.matricula);
        printf("Nome: %.2f\n", al_found.n1);
        printf("Nome: %.2f\n", al_found.n2);
        printf("Nome: %.2f\n", al_found.n3);

    } else if(response == -1)
        printf("Invalid Null Pointer!\n");
    
    else if(response == -4)
        printf("Element not found!\n");
    
    
    // Testing the function list_get_pos()
    
    int response, pos, mat = 1201105;

    response = list_get_pos(list, mat, &pos);
    if(response == 0){
        printf("Posiçao de %d na lista: %d\n",mat, pos);
    } else if(response == -1)
        printf("Invalid NULL pointer!\n");
    else if(response == -4) 
        printf("Element not found!\n");
    */


    return 0;
}