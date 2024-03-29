#include <stdio.h>
#include <stdlib.h>

void desenhaLinha(int *tamanhoLinha){
    for(int i=0; i<*tamanhoLinha; i++)
        printf("=");
    printf("\n");
}
int main(){
    int quantidade, tamanho;
    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf("%d", &quantidade);
    printf("Digite o tamanho da linha: ");
    scanf("%d", &tamanho);
    
    for(int i=0; i<quantidade;i++)
        desenhaLinha(&tamanho);
    
    return 0;
}

/*
=> Faça um procedimento chamado DesenhaLinha. Ele deve desenhar 
uma linha na tela usando vários caracteres "=" (Ex: ========). 
O procedimento deve ter como argumento um valor que indica
quantos caracteres "=" serão mostrados. 

Ex: DesenhaLinha(4) tem como saída ====; 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário quantas vezes a função 
deverá ser executada e qual o tamanho da linha a ser desenhada.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite a quantidade de linhas a serem impressas: 3
Digite o tamanho da linha: 5
=====
=====
=====
-------------------------------------------------------------------------------
*/