#include <stdio.h>

int main(){
    float entrada, quadrado;
    printf("<< Calculo do Quadrado de n >>\n");
    printf("Digite um número: ");
    scanf("%f", &entrada);
    quadrado = entrada*entrada;
    printf("O valor de %.2f ao quadrado é %.2f\n", entrada, quadrado);
}

/*
=> Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.

-------------------------------------------------------------------------------
Exemplo de saída: 
<< Calculo do Quadrado de n>>
Digite um número: 2.5O 
O valor de 2.5 ao quadrado é 6.25
-------------------------------------------------------------------------------
*/