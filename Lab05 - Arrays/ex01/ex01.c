#include <stdio.h>

int main(){
    int valores[6];
    printf("<< Listando um vetor >>\n");
    printf("Entre com o valor 1: ");
    scanf("%d", &valores[0]);
    printf("Entre com o valor 2: ");
    scanf("%d", &valores[1]);
    printf("Entre com o valor 3: ");
    scanf("%d", &valores[2]);
    printf("Entre com o valor 4: ");
    scanf("%d", &valores[3]);
    printf("Entre com o valor 5: ");
    scanf("%d", &valores[4]);
    printf("Entre com o valor 6: ");
    scanf("%d", &valores[5]);

    printf("Os valores lidos são: %d %d %d %d %d %d\n",valores[0],
                                                       valores[1], 
                                                       valores[2],
                                                       valores[3],
                                                       valores[4],
                                                       valores[5]
    );
    return 0;
}

/*
    Crie um programa que lê 6 valores e em seguida mostra na tela os valores lidos. 
    Não utilize loops e utilize vetores para armazenar os números.
*/