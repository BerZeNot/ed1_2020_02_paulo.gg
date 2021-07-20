#include <stdio.h>

int main() {
    int valorA, valorB;
    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro\n");
    printf("Entre com o primeiro valor (A): ");
    scanf("%d", &valorA);
    printf("Entre com o primeiro valor (B): ");
    scanf("%d", &valorB);
    printf("A and B: %d\n", (valorA && valorB));
    printf("A or B: %d\n", (valorA || valorB));
    printf("A xor B: %d\n", (valorA || valorA) && !(valorA && valorB));
    printf("not A: %d\n", !valorA);
}

/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros,, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/
