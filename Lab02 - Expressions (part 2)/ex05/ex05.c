#include <stdio.h>
#include <math.h>

int main() {
    int bt1, bt2, bt3, bt4, decimal;
    printf("<< Conversor de numeros binarios >>\n");
    printf("Digite o 1o bit: ");
    scanf("%d", &bt1);
    printf("Digite o 2o bit: ");
    scanf("%d", &bt2);
    printf("Digite o 3o bit: ");
    scanf("%d", &bt3);
    printf("Digite o 4o bit: ");
    scanf("%d", &bt4);
    decimal = bt1*pow(2,3) + bt2*pow(2,2) + bt3*pow(2,1) + bt4*pow(2,0);
    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d\n",bt1, bt2, bt3, bt4, decimal);
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