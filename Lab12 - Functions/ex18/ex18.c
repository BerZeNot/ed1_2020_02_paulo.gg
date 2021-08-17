#include <stdio.h>
#include <stdlib.h>

void imprime_vet_double(double *vetord, int n){
    printf("\nO vetor principal eh: ");
    for(int i=0; i<n; i++){
        printf("%.2lf ", vetord[i]);
    }
    printf("\n");
}

void maiorEmenor(double *vetord, int tam){
    double maior, menor;
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
    printf("O maior valor eh %.2f\n", maior);
    printf("O menor valor eh %.2f\n", menor);

}

void leVetor(double *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%lf", &vetor[i]);
    }
}

int main(){
    int tam;
    double *vetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vetor = (double *)malloc(tam*sizeof(double));
    
    leVetor(vetor, tam);
    imprime_vet_double(vetor, tam);
    maiorEmenor(vetor, tam);
    return 0;
}

/*
=> Crie um procedimento que recebe um vetor de double como 
entrada e devolve o maior e o menor elemento do vetor. Mostre no 
programa principal o vetor, o maior e o menor elemento.


No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 0.02
Digite o valor 3: 3

O vetor principal eh: -1.00, 0.02, 3.00
O maior valor eh 3.00
O menor valor eh -1.00
-------------------------------------------------------------------------------
Obs: note que para este caso, foram consideradas duas casas após o ponto. 
*/