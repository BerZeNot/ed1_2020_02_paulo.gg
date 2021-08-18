#include <stdio.h>

void imprime_vet_int(int *vetori, int n){
    for(int i=0; i<n; i++){
        printf("%d ", vetori[i]);
    }
    printf("\n");
}

void copiarvet(int *vet_origem, int *vet_destino,int n){
    for (int i = 0; i < n; i++){
        vet_destino[i] = vet_origem[i];
    }   
}

int main(){
    int vet1[5] = {1, 2, 3, 4, 5};
    int vetDestinos[5] = {1, 2, 3, 3, 6};
    int n=5;
    
    printf("O vetor de origem eh: ");
    imprime_vet_int(vet1, n);
    printf("O vetor de destino eh: ");
    imprime_vet_int(vetDestinos, n);

    copiarvet(vet1, vetDestinos, n);

    printf("O vetor de destino apos a copia eh: ");
    imprime_vet_int(vetDestinos, n);
    printf("\n");
    return 0;
}

/*
=> Faça uma função para copiar um vetor inteiro para outro 
vetor. Ambos vetores devem ter o mesmo tamanho. Mostre no 
programa principal os dois vetores.

Chamada:
copiarvet(vet_origem, vet_destino, n);


Os valores são definidos na função principal.
-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1, 2, 3, 4, 5
O vetor de destino eh: 1, 2, 3, 3, 6
O vetor de destino apos a copia eh: 1, 2, 3, 4, 5
-------------------------------------------------------------------------------
*/