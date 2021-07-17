#include <stdio.h>

int main() {
    int numero;
    printf("<< Sucessor e Antecessor >>\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("\nAntecessor: %d", numero-1);
    printf("\nNumero: %d" ,numero);
    printf("\nSucessor: %d\n", numero+1);

    return 0;
}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/