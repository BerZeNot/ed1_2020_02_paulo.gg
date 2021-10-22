#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    TQueue *queue;
    
    int response;
    
    queue = queue_create();
    if(queue != NULL)
        printf("Queue create successful!\n");
    
    response = queue_enqueue(queue, alns[0]);
    response = queue_enqueue(queue, alns[1]);
    response = queue_enqueue(queue, alns[2]);
    response = queue_enqueue(queue, alns[3]);
    response = queue_enqueue(queue, alns[4]);
    if(response == 0)
        printf("Enqueue successful!\n");

    
    queue_print(queue);

    printf("<< After dequeue >>\n");
    queue_dequeue(queue);

    queue_print(queue);

    int queueSize;
    struct aluno aln;
    
    queue_get_first(queue, &aln);
    printf("First student at queue: %s\n", aln.nome);

    queueSize = queue_size(queue);
    printf("Queue size: %d\n", queueSize);


    response = queue_free(queue);
    if(response == 0)
        printf("Queue free successful!\n");
    
    return 0;
}