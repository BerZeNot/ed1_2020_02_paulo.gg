#include <stdio.h>

int main() {
    char bin[4];
    printf("== Conversor de numeros binarios ==\n");
    printf("Digite o 1o bit: ");
    scanf("%c", &bin[0]);
    setbuf(stdin, NULL);
    printf("Digite o 2o bit: ");
    scanf("%c", &bin[1]);
    setbuf(stdin, NULL);
    printf("Digite o 3o bit: ");
    scanf("%c", &bin[2]);
    setbuf(stdin, NULL);
    printf("Digite o 4o bit: ");
    scanf("%c", &bin[3]);
    printf("Binario: %c\n", bin);

    // AINDA DEVE SER RESOLVIDO
}

/*
=> Faça um conversor de número binário para decimal (inteiro). 
O número deve ter 4 bits, sendo o bit mais significativo digitado primeiro. 
Mostrar na resposta o número binário e o número decimal.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Conversor de numeros binarios >>
Digite o 1o. bit: 1
Digite o 2o. bit: 0
Digite o 3o. bit: 1
Digite o 4o. bit: 1
O numero binario 1011 corresponde ao numero decimal 11
-------------------------------------------------------------------------------
*/