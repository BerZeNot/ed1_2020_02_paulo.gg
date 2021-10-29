#include <stdio.h>
#include <stdlib.h>


int concatVet(int *vet1, int vet1Size, int *vet2, int vet2Size, int **vetConcat, int *sizeofVetConcat){
    *sizeofVetConcat = vet1Size + vet2Size;
    int *newVet;
    newVet = malloc(*sizeofVetConcat*sizeof(int));
    if(newVet == NULL)
        return -1;
    
    int i;
    for(i=0; i<vet1Size; i++){
        newVet[i] = vet1[i];
    }

    for(int j=0; j<vet2Size; j++){
        newVet[i] = vet2[j];
        i++;
    }
    
    *vetConcat = newVet;
    return 0;
}

int main(){
    int vet1[] = {1,5,2};
    int vet2[] = {10,30};   

    int vet1Size = sizeof(vet1)/4;
    int vet2Size = sizeof(vet2)/4;
    int *vetConcat;
    int sizeofVetConcat;
    concatVet(vet1, vet1Size, vet2, vet2Size, &vetConcat, &sizeofVetConcat);
    
    printf("Vetor concatenado = [ ");
    for(int i=0; i<sizeofVetConcat; i++){
        printf("%d",vetConcat[i]);
        if(i<sizeofVetConcat-1)
            printf(", ");
    }
    printf(" ]\n");
}


/* ex01
Crie uma função que faz a junção de dois vetores inteiros. 
A função deve ter como entrada os dois vetores e seus
respectivos tamanhos. A alocação de espaço necessário para
o vetor concatenado deve ser feita dentro da função 
(a função então deve devolver para o programa principal 
o vetor alocado e também o tamanho desse novo vetor). 
A função deve retornar um valor inteiro: (0 - zero)
se a junção ocorreu de forma correta; (-1) em caso de erro.
Mostre o uso da função no programa principal. Não é
permitido criar novos tipos de dados para a solução
do exercício (ou seja, sem uso de structs).


Vetor 1: [1, 5, 2]
Vetor 2: [10, 30] 
Concatenção Vetor 1, Vetor 2

Vetor Concatenado = [ 1, 5, 2, 10, 30]

*/