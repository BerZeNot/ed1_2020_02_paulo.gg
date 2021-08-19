#include <stdio.h>
#include <stdlib.h>

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

double *copiarvet(double *vet_origem,  int n){
    double *vet2;
    vet2 = (double *)malloc(n*sizeof(double));
    for (int i=0; i < n; i++){
        vet2[i] = vet_origem[i];
    }
    return vet2;
}

int main(){
    int tam=5;
    double vet1[5] = {1.20, 2.00, 3.20, 4.00, 5.10}, *vet2;
    printf("O vetor de origem eh: ");
    imprime_vet_double(vet1, tam);
    printf("O vetor de destino eh: ");
    vet2 = copiarvet(vet1, tam);
    imprime_vet_double(vet2,tam);
    return 0;
}

/*
=> Faça uma função que copia um vetor de double para um 
outro vetor. Esse outro vetor é alocado dentro da função que faz a 
cópia. Mostre os dois vetores.

Chamada:
vet_destino  = copiarvet(vet_origem,  n);

-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1.20, 2.00, 3.20, 4.00, 5.10
O vetor de destino eh: 1.20, 2.00, 3.20, 4.00, 5.10
-------------------------------------------------------------------------------
*/