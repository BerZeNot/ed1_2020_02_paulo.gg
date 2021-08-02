#include <stdio.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int matLen = 3;
    int mat1[matLen][matLen], mat2[matLen][matLen], matProd[matLen][matLen];
    printf("<< Soma de matrizes >>\n");
    printf("Matriz 1: \n");
    for(int i=0; i<matLen; i++){
        for(int j=0; j<matLen; j++){
            mat1[i][j] = (rand()/(double)RAND_MAX)*100;
            printf("[%d]", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2: \n");
    for(int i=0; i<matLen; i++){
        for(int j=0; j<matLen; j++){
            mat2[i][j] = (rand()/(double)RAND_MAX)*100;
            printf("[%d]", mat2[i][j]);
        }
        printf("\n");
    }
    
    printf("Produto das matrizes:\n");
    for(int i=0; i<matLen; i++){
        for(int j=0; j<matLen; j++){
            matProd[i][j] = mat1[i][j] * mat2[i][j];
            printf("[%d]",matProd[i][j]);
        }
        printf("\n");
    }
    return 0;
}