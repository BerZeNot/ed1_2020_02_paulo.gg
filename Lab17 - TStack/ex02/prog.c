#include <stdio.h>
#include <string.h>
#include "TStack.h"

int main(){
    struct aluno alns[3];
    struct aluno aux;
    // Students declaration;
    {
        strcpy(alns[0].nome, "Adamastor");
        alns[0].matricula = 12011250;
        alns[0].n1 = 10; 
        alns[0].n2 = 8.6;
        alns[0].n3 = 9.7;

        strcpy(alns[1].nome, "Bertolazzi");
        alns[1].matricula = 12011251;
        alns[1].n1 = 9.0;
        alns[1].n2 = 6.7;
        alns[1].n3 = 10;
        
        strcpy(alns[2].nome, "Carlos");
        alns[2].matricula = 12011252;
        alns[2].n1 = 3;
        alns[2].n2 = 7.5;
        alns[2].n3 = 5.9;
    }
    
    TStack *st;
    st = stack_create();
    int result;
    result = stack_push(st, alns[0]);
    result = stack_push(st, alns[1]);
    result = stack_push(st, alns[2]);

    if(result == 0)
        printf("Push successful\n");
    
    
    result = stack_pop(st);
    if(result == 0)
        printf("Pop successful\n");
    

    stack_print(st);

    result = stack_empty(st);
    if(result == 0)
        printf("Stack is empty\n");
    if(result == 1)
        printf("Stack is not empty\n");

    printf("<< Aluno no topo da pilha >>\n");
    stack_top(st, &aux);
    printf("Nome: %s\n", aux.nome);

    result = stack_free(st);
    if(result == 0)
        printf("Free successful\n");
    return 0;
}
