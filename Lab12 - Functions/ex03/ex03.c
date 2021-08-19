#include <stdio.h>
#include <stdlib.h>

void desenhaLinha(int *tamanhoLinha){
    for(int i=0; i<*tamanhoLinha; i++)
        printf("=");
    printf("\n");
}

int calculaFatorial(int *numero){
    int numFatorial=*numero;
    if(*numero==0){
        return 1;
    }
    for(int i=*numero-1; i > 0; i-- ){
        numFatorial = numFatorial*i;
    }
    return numFatorial;
}

int main(){
    int tamanho, numero;
    printf("Digite o tamanho da linha: ");
    scanf("%d", &tamanho);
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d", &numero);

    desenhaLinha(&tamanho);
    printf("O fatorial de %d eh %d\n", numero, calculaFatorial(&numero));
    desenhaLinha(&tamanho);
    
    return 0;
}

/*
=> Faça uma função para calcular o fatorial de um número. Use essa função
para calcular o fatorial de um número que o usuário digitar.
Colocar todas as funções E/S (entrada e saída) no programa principal.
(use também a função DesenhaLinha – esta pode conter comandos de saída fora do programa principal). 

Ex: Fatorial(5) tem como saída 120 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário o tamanho da linha a ser desenhada e o número que se
deseja calcular o fatorial.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho da linha: 10
Digite o numero que deseja calcular o fatorial: 5
==========
O fatorial de 5 eh 120
==========
-------------------------------------------------------------------------------
*/