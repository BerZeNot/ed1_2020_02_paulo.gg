#include <stdio.h>
#include <stdlib.h>

void imprime_vet_float(float *vetorf, int n){
    printf("\nO vetor principal eh: ");
    for(int i=0; i<n; i++){
        printf("%.2f", vetorf[i]);
        if(i<n-1){
            printf(", ");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}

void leVetor(float *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

int negativos(float *vet, int N){
    int qtdNegativos=0;
    for (int i=0; i <N; i++){
        if(vet[i] < 0){
            qtdNegativos++;
        }
    }
    return qtdNegativos;
}

int main(){
    float *vet;
    int n, qtdNegativos;
    printf("<< Negativos no vetor >>\n");
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vet = (float *)malloc(n*sizeof(float));
    leVetor(vet, n);
    qtdNegativos = negativos(vet, n);
    imprime_vet_float(vet, n);
    printf("O vetor tem %d numero(s) negativo(s)\n", qtdNegativos);
    free(vet);
    return 0;
}

/*
=> Implemente uma função que receba como parâmetro um 
vetor de n números reais (VET) de tamanho N e retorne quantos 
números negativos há a nesse vetor. Use o seguinte protótipo:

int negativos(float *vet, int N); 

No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 3
Digite o valor 3: -2

O vetor principal eh: -1.00, 3.00, -2.00
O vetor tem 2 numero(s) negativo(s)
-------------------------------------------------------------------------------
*/