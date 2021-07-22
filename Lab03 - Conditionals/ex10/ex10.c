#include<stdio.h>

int main(){
    int valorA, valorB;
    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e não 0 para verdadeiro\n");
    printf("Entre com o primeiro valor (A): ");
    scanf("%d", &valorA);
    printf("Entre com o primeiro valor (B): ");
    scanf("%d", &valorB);

    if(valorA && valorB){
        printf("A and B: VERDADEIRO\n");
    } else {
        printf("A and B: FALSO\n");
    }

    if(valorA || valorB){
        printf("A or B: VERDADEIRO\n");
    } else {
        printf("A or B: FALSO\n");
    }

    if((valorA || valorB) && !(valorA && valorB)){
        printf("A xor B: VERDADEIRO\n");
    } else {
        printf("A xor B: FALSO\n");
    }

    if(!valorA){
        printf("notA: VERDADEIRO\n");
    } else {
        printf("notA: FALSO\n");
    }

}

/*
    Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o 
    usuário entrar com dois valores inteiros, sendo que esses valores devem ser 
    convertidos para o tipo lógico, onde 0 implica em FALSO e qualquer outro número 
    implica em VERDADEIRO.  A saída do programa deve ser como a mostrada abaixo
    Exemplo de saída:

    == Operadores Booleanos ==
    Digite 0 para falso e não 0 para verdadeiro
    Entre com o primeiro valor (A): -1
    Entre com o segundo valor (B): 3
    A and B:  VERDADEIRO
    A or B:  VERDADEIRO
    A xor B:  FALSO        XOR = (p || q) && !(p && q)
    notA:  FALSO
*/