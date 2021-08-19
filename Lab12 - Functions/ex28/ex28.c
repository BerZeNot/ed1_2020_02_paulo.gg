#include <stdio.h>
#include <stdlib.h>

void copiarvet(double *vetOrigem, double *vetDestino, int tamanho){
    vetDestino = (double *)malloc(tamanho*sizeof(double));
    for(int i=0; i<tamanho; i++){
        vetDestino[i] = vetOrigem[i];
    }
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
    int tamanho=5;
    double vet[5] = {1,2,3,4,5}, *vetDestino;
    
    copiarvet(vet, vetDestino, tamanho);
    printf("Vetor origem: \n");
    imprime_vet_double(vet, tamanho);
    printf("Vetor destino: \n");
    imprime_vet_double(vetDestino, tamanho);

    return 0;
}

/*
=> Tente fazer uma função que copia um vetor de double para 
um outro vetor. Esse outro vetor é alocado dentro da função que 
faz a cópia.  Mostre vet_destino no programa principal.

Chamada:
copiarvet(vet_origem, vet_destino, n);

Explique porque a função não funciona. Faça o mapa de memória 
(antes, durante, e depois da chamada da função). Qual seria a 
solução para uma função deste tipo?

Uma possível solução seria fazer a alocação de memória na função main e em seguida passar o vetor alocado para a função de cópia.
-------------------------------------------------------------------------------
Observação:

Utilize o excel para fazer o mapa de memória (Modelo disponível nos
arquivos do Teams).
-------------------------------------------------------------------------------
*/