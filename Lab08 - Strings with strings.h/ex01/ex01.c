#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char nome[50] = "Paulo";
    printf("<< Vetor de Char >>\n\n");
    printf("Digite um nome: ");
    gets(nome);
    printf("\nO nome digitado é: %s\n", nome);
    
    return 0;  
}

/*
Utilizando strings, crie um programa que leia o nome de 
uma pessoa e, em seguida, mostre o nome lido. O nome 
pode ter no máximo 50 caracteres.  Use a função gets() 
para efetuar a leitura
*/