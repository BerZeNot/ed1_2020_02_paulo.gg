#include <stdio.h>
#include <stdlib.h>

void imprime_vet_int(int *vetori, int n){
    for(int i=0; i<n; i++){
        printf("%d ", vetori[i]);
    }
    printf("\n");
}

void leVetor(int *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void multvet(int *vetor, int n, int escalar){
    for(int i=0; i<n; i++){
        vetor[i] = vetor[i] * escalar;
    }
}

int main(){
    int tam, *vetor, escalar;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vetor = (int *)malloc(tam*sizeof(int));
    leVetor(vetor, tam);
    printf("Digite o valor do escalar: ");
    scanf("%d", &escalar);

    printf("\nO vetor de origem eh: ");
    imprime_vet_int(vetor, tam);
    printf("O vetor final eh: ");
    multvet(vetor, tam, escalar);
    imprime_vet_int(vetor, tam);
    free(vetor);
    
    return 0;
}

/*
=> Faça uma função para multiplicar um vetor por um escalar 
(um número). Mostre, no programa principal, o vetor antes e depois 
da multiplicação.

Chamada:
multvet(vetor, n, escalar);


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e o valor do escalar.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 5
Digite o valor 1: 2
Digite o valor 2: 4
Digite o valor 3: 10
Digite o valor 4: 6
Digite o valor 5: 5
Digite o valor do escalar: 3

O vetor de origem eh: 2, 4, 10, 6, 5
O vetor final eh: 6, 12, 30, 18, 15
-------------------------------------------------------------------------------
*/