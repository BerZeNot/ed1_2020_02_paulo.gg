#include <stdio.h>

int main(){
    int n, cont=1;
    printf("<< Triangulo de Floyd >>\n");
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ", cont);
            cont++;
        }
        printf("\n");
    }
    return 0;
}

/*
    Escreva um programa que leia um numero inteiro positivo n 
    e em seguida imprima n linhas do chamado Triangulo de Floyd:
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15
    16 17 18 19 20 21 
*/