#include <stdio.h>

int main(){
    int cont = 1, fatAtual = 1;
    printf("<< Fatorial >>\n");
    while(cont <= 10){
        for(int i = cont; i > 0; i--){
            fatAtual = fatAtual * i;
            // printf("fatAtual: %d\n", fatAtual);
        }
        printf("%d! = %d\n",cont, fatAtual);
        cont++;
        fatAtual = 1;
    }

    return 0;
}

/*
    Faça um programa que mostre o valor de 1!, 2!, 3!, até 10!. Utilize somente variáveis inteiras
    Exemplo de saída: 
    << Fatorial >>
    1! = 1
    2! = 2
    3! = 6
    4! = 24
    5! = 120
    6! = 720
    7! = 5040 
    8! = 40320
    9! = 362880 
    10! = 3628800
*/