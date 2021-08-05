#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char nome[50];
    int i=0;
    printf("<< Vetor de Char >>\n");
    printf("\nDigite um nome: ");
    gets(nome);
    printf("O nome digitado é: ");
    while (nome[i]!='\0'){
        printf("%c", toupper(nome[i]));
        i++;
    }
    i=0;
    printf("\nO nome digitado é: ");
    while (nome[i]!='\0'){
        printf("%c", tolower(nome[i]));
        i++;
    }
    printf("\n");
    

    return 0;
}

/*

*/