#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leVetor(int *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

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

void maiorEmenor(int *vetord, int tam){
    int maior, menor;
    for(int i=0; i<tam; i++){
        if(i==0){
            maior = vetord[i];
            menor = vetord[i];
        } else {
            if(vetord[i] > maior){
                maior = vetord[i];
            }
            if(vetord[i] < menor){
                menor = vetord[i];
            }
        }
    }
    printf("Maior: %d   Menor: %d\n", maior, menor);
}

void negativos(int *vet, int N){
    int qtdNegativos=0;
    for (int i=0; i <N; i++){
        if(vet[i] < 0){
            qtdNegativos++;
        }
    }
    printf("Numero de negativos: %d\n",qtdNegativos);
}

void abs_vet(int *vetor, int tam){
    printf("Vetor absoluto: ");
    for (int i=0; i < tam; i++){
        printf("%d", abs(vetor[i]));
        if(i<tam-1){
            printf(", ");
        } else {
            printf(" \n");
        }
    }    
}

void copiarvet(int *vet_origem, int *vet_destino,int n){
    for (int i = 0; i < n; i++){
        vet_destino[i] = vet_origem[i];
    }   
}

void multvet(int *vetor, int n, int escalar){
    for(int i=0; i<n; i++){
        vetor[i] = vetor[i] * escalar;
    }
}

int main(){
    int *vetor, *vetorCopia, tamanho, escalar;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int *)malloc(tamanho*sizeof(int));
    vetorCopia = (int *)malloc(tamanho*sizeof(int));
    leVetor(vetor, tamanho);
    printf("\nVetor: ");
    imprime_vet_int(vetor, tamanho);
    maiorEmenor(vetor, tamanho);
    negativos(vetor, tamanho);
    abs_vet(vetor, tamanho);

    printf("\nCopiando para outro vetor (alocado dinamicamente)\n");
    printf("Vetor original: ");
    imprime_vet_int(vetor, tamanho);
    printf("Vetor copiado: ");
    copiarvet(vetor, vetorCopia, tamanho);
    imprime_vet_int(vetorCopia, tamanho);

    printf("\nEntre com o valor escalar para multiplicar o vetor original: ");
    scanf("%d", &escalar);
    multvet(vetor, tamanho, escalar);
    printf("Vetor original: ");
    imprime_vet_int(vetor, tamanho);
    printf("Vetor copiado: ");
    imprime_vet_int(vetorCopia, tamanho);
    free(vetor);
    return 0;
}

/*
=> Use as funções criadas nos exercícios anteriores em um único 
programa, mas agora trabalhe com vetores alocados 
dinamicamente no programa principal. Lembre-se de liberar a 
memória depois de usar os vetores.


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e posteriormente, o valor escalar para multiplicação do vetor.

-------------------------------------------------------------------------------
Exemplo de Saída:

Entre com o tamanho do vetor: 4
Entre com o elemento 1: 50
Entre com o elemento 2: 20
Entre com o elemento 3: 10
Entre com o elemento 4: -30

Vetor: 50, 20, 10, -30
Maior: 50   Menor: -30
Numero de negativos: 1
Vetor absoluto: 50, 20, 10, 30

Copiando para outro vetor (alocado dinamicamente)

Vetor original: 50, 20, 10, -30
Vetor copiado: 50, 20, 10, -30

Entre com o valor escalar para multiplicar o vetor original: 10

Vetor original: 500, 200, 100, -300
Vetor copiado: 50, 20, 10, -30
-------------------------------------------------------------------------------
*/