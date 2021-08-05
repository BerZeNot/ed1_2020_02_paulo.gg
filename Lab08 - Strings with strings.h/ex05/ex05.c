#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char fullName[40], firstName[20], lastName[20];
    int isLastName=0, i=0, j=0;
    printf("<< Vetor de Char >>\n");
    printf("Digite um nome e sobrenome: ");
    gets(fullName);

    for (i = 0; fullName[i]!='\0'; i++){
        if(fullName[i]==' '){
            isLastName=1;
            continue;
        } else if(isLastName==0){
            firstName[i] = fullName[i];
        } else {
            lastName[j] = fullName[i];
            j++;
        }
        lastName[j] = '\0';
    }
    printf("\nNome: %s", firstName);
    printf("\nSobrenome: %s\n", lastName);

    return 0;
}

/*
Faça um programa que recebe o nome e sobrenome de uma pessoa (máximo 40 caracteres), 
copie o nome para um vetor e o sobrenome para outro. Mostre os dois vetores copiados.

<< Vetor de Char >>
Digite um nome e sobrenome: Bruno Travençolo
Nome: Bruno
Sobrenome: Travençolo
*/