#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas

int main(){
    int *numeros, n, i, qtdPares=0;

    printf("<< Par ou Impar >>\n");
    printf("Quantos inteiros serao lidos: ");
    scanf("%d", &n);

    numeros = (int *)malloc(n*sizeof(int));

    for(i = 0; i < n; i++){
        printf("%dº inteiro: ", i+1);
        scanf("%d", &numeros[i]);
        if(numeros[i]%2==0){
            qtdPares++;
        }
    }

    printf("\nSao pares: %d dos %d inteiros lidos.\n", qtdPares, n);
    printf("Sao impares: %d dos %d inteiros lidos.\n", (n-qtdPares), n);

    return 0;
}

/*
3) Faça um programa que leia n inteiros (definidos pelo usuário) 
armazenando-os em uma memória alocada dinamicamente. Em seguida, mostre
quantos dos n números são pares e quantos são ímpares.


Exemplo de saída:
<< Par ou Impar >>
Quantos inteiros serao lidos: 5
1º inteiro: 1
2º inteiro: 2
3º inteiro: 3
4º inteiro: 4
5º inteiro: 5

Sao pares: 2 dos 5 inteiros lidos.
Sao impares: 3 dos 5 inteiros lidos.

*/