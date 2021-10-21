#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"
#include "TQueue.h"

int main(){
    struct aluno alns[5];
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

        strcpy(alns[3].nome, "Demétrius");
        alns[3].matricula = 12011253;
        alns[3].n1 = 10;
        alns[3].n2 = 9.5;
        alns[3].n3 = 9.9;

        strcpy(alns[4].nome, "Ernésto");
        alns[4].matricula = 12011254;
        alns[4].n1 = 10;
        alns[4].n2 = 8.5;
        alns[4].n3 = 7.1;
    }
    

    TQueue *fila;
    fila = queue_create();
    queue_enqueue(fila, alns[0]);
    queue_enqueue(fila, alns[1]);
    queue_enqueue(fila, alns[2]);
    queue_enqueue(fila, alns[3]);
    queue_enqueue(fila, alns[4]);
    queue_print(fila);
    // printf("\n<< After dequeue 1 >>\n");
    // queue_dequeue(fila);
    // queue_print(fila);

    // printf("\n<< After dequeue 2 >>\n");
    // queue_dequeue(fila);
    // queue_print(fila);

    // printf("\n<< After dequeue 3 >>\n");
    // queue_dequeue(fila);
    // queue_print(fila);

    // printf("\n<< After dequeue 4 >>\n");
    // queue_dequeue(fila);
    // queue_print(fila);

    // printf("\n<< After dequeue 5 >>\n");
    // queue_dequeue(fila);
    // queue_print(fila);

    int queueSize;
    queueSize = queue_size(fila);
    printf("Queue size: %d\n", queueSize);

    struct aluno aln;
    queue_first(fila, &aln);
    printf("First student on the queue: %s\n", aln.nome);

    int response;
    response = queue_free(fila);
    if(response == 0)
        printf("Queue free successful!\n");
    else
        printf("Fail to free list. Error: %d\n", response);
        
    return 0;
}