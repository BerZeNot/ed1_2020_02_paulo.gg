#include<stdio.h>
#include<stdlib.h>

int main(){
    srand(time(NULL));
    int matLn=5, matCl=8; // Matriz length.
    int matriz[matLn][matCl]; // matrix do tamanho matLn x matCl
    int maxValue, posLn, posCl; // Maior valor, linha e coluna do maior valor.
    
    printf("<< Maior valor da Matriz >>\n\n");
    printf("Matriz:\n");
    for(int i=0; i<matLn; i++){
        for(int j=0; j<matCl; j++){
            matriz[i][j] = (rand()/(double)RAND_MAX)*1000;
            if(matriz[i][j] < 10){
                printf("[00%d]", matriz[i][j]);
            } else if(matriz[i][j] < 100){
                printf("[0%d]", matriz[i][j]);
            } else {
                printf("[%d]", matriz[i][j]);
            }
            if(i==0 && j==0){
                maxValue = matriz[i][j];
            } else {
                if(matriz[i][j] > maxValue){
                    maxValue = matriz[i][j];
                    posLn = j;
                    posCl = i;
                }
            }
        }
        printf("\n");
    }
    printf("\nMaior valor: %d\n", maxValue);
    printf("Posição: Matriz[%d][%d]\n", posLn,posCl);
    return 0;
}
/*
Faça um algoritmo para ler uma matriz 5x8 e mostrar o 
menor valor e a sua posição(linha, coluna)
*/