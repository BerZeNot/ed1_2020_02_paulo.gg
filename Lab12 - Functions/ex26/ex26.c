#include <stdio.h>

void leVetor(int *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

double *to_double(int *vet_int,int n){
    double *vetDouble;
    vetDouble = (double *)malloc(n*sizeof(double));
    for (int i=0; i<n;i++){
        vetDouble[i] = (double )vet_int[i];
    }
    return vetDouble;
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

void imprime_vet_double(double *vetori, int n){
    for(int i=0; i<n; i++){
        printf("%.2lf", vetori[i]);
        if(i<n-1){
            printf(", ");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}

int main(){
    int *vetorInt, tamanho;
    double *vetorDouble;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetorInt = (int *)malloc(tamanho*sizeof(int));
    leVetor(vetorInt, tamanho);

    vetorDouble = to_double(vetorInt, tamanho);
    printf("\nO vetor de origem eh: ");
    imprime_vet_int(vetorInt, tamanho);
    printf("O vetor convertido para double eh: ");
    imprime_vet_double(vetorDouble, tamanho);
    return 0;
}

/*
=> Faça a função to_double, que recebe um vetor de inteiro e 
retorna um vetor com o mesmo conteúdo, mas convertido para 
double.

Chamada:
vet_double = to_double(vet_int,n);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 4
Digite o valor 1: 1
Digite o valor 2: 3
Digite o valor 3: 5
Digite o valor 4: 4

O vetor de origem eh: 1, 3, 5, 4
O vetor convertido para double eh: 1.00, 3.00, 5.00, 4.00
-------------------------------------------------------------------------------
*/