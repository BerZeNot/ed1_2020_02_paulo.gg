#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char nome[50];
    printf("<< Separa letras >>\n");
    printf("Digite o nome: ");
    gets(nome);
    for(int i=0; nome[i]!='\0'; i++){
        printf("%da letra: %c\n", i+1, nome[i]);
    }
    
    return 0;
}

/*
Faça um programa que mostre as letras de uma string separadamente.
Exemplo de saída:

<< Separa letras >>
Digite o nome : Bruno
1a letra: B 
2a Letra: r 
3a Letra: u 
4a Letra: n 
5a letra: o
*/