#include <stdio.h>

int main(){
    char nome[50], c;
    int pos = 0;
    printf("<< Vetor de char>>\n");
    printf("Digite um nome: ");
    c = getchar();
    while(c != '\n'){
        nome[pos] = c;
        pos++;
        c = getchar();
    }
    printf("O nome digitado é: ");
    for(int i = 0; i < pos; i++){
        printf("%c", nome[i]);
        if(i==pos-1)
            printf("\n");
    }
    return 0;
}

/*
Utilizando os conceitos aprendidos até o momento (vetores e tipo char), crie um programa 
que leia o nome de uma pessoa e, em seguida, mostre o nome lido. Utilizar getchar() para 
entrada dos dados (veja acima um exemplo de como usar o getchar()). O nome pode ter no 
máximo 50 caracteres. Não usar as funções de string.h

Exemplo de saída:
<< Vetor de char>>
Digite um nome: Bruno
O nome digitado é: Bruno
*/