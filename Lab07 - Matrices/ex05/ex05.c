#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("<< Soma da Diagonal Principal >>\n\n");
    int matLen=5, posDP=0, somaDP=0, posDPC=0, posDPL=0;
    int matriz[matLen][matLen];
    srand(time(NULL));
    for (int i=0; i < matLen; i++){
        for(int j=0; j<matLen; j++){
            matriz[i][j] = (rand()/(double)RAND_MAX)*100;
            if(i==posDPC && j==posDPL){
                somaDP += matriz[i][j];
                posDPL++;
                posDPC++;
                // printf("Somou [%d] -> pos i: %d | j: %d\n", matriz[i][j], i, j);
            }
        }
    }

    for(int i=0; i<matLen; i++){
        for(int j=0; j<matLen; j++){
            if(matriz[i][j] < 10){
                printf("[0%d]", matriz[i][j]);
            } else {
                printf("[%d]", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("Soma da DP: %d\n", somaDP);
    
    return 0;
}

/*
Faça um algoritmo para calcular a soma da diagonal principal de uma matriz 5x5
*/