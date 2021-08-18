#include <stdio.h>
#include <math.h>

void imprime_vet_int(int *vetori, int n){
    for(int i=0; i<n; i++){
        printf("%d", vetori[i]);
        if(i<n-1){
            printf(", ");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}

void leVetor(int *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void abs_vet(int *vetor, int tam){
    for (int i=0; i < tam; i++){
        printf("%d", abs(vetor[i]));
    }    
}

int main(){
    int tamanho, *vetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int *)malloc(tamanho*sizeof(int));
    leVetor(vetor, tamanho);
    printf("O vetor de origem eh: ");
    imprime_vet_int(vetor, tamanho);
    printf("O vetor com valores absolutos eh: ");
    abs_vet(vetor, tamanho);
    imprime_vet_int(vetor, tamanho);
    free(vetor);
    return 0;
}

/*
=> Faça uma função para transformar os números de um vetor 
de inteiros em seu valor absoluto (use a função abs (math.h)).

Chamada:
    abs_vet(vet);

No programa principal, solicite ao usuário o tamanho do vetor e os valores
a serem computados. Imprima o vetor de origem e o vetor com valores absolutos.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: 1
Digite o valor 2: -1
Digite o valor 3: 2

O vetor de origem eh: 1, -1, 2
O vetor com valores absolutos eh: 1, 1, 2
-------------------------------------------------------------------------------
*/