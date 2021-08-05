#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(){
    char nome1[50], nome2[50];
    int equal = 0;
    printf("<< Compara nomes >>\n");
    printf("Digite o nome 1: ");
    gets(nome1);
    printf("Digite o nome 2: ");
    gets(nome2);

    for(int i=0; nome1[i]!='\0'; i++){
        if(strcmp(&nome1[i], &nome2[i])==0){
            continue;
        } else {
            equal = 1;
            break;
        }
    }
    if(equal==0){
        printf("Os nomes digitados são iguais\n");
    } else {
        printf("Os nomes digitados são diferentes\n");
    }
 
}

/*
Faça um programa em que o usuário digita dois nomes, e o programa 
informa se os nomes são iguais. Use strcmp.

Exemplo de saída:
<< Compara nomes >>
Digite o nome 1: Bruno
Digite o nome 1: Bruno
Os nomes digitados são iguais

Exemplo de saída:
<< Compara nomes>>
Digite o nome 1: Bruno
Digite o nome 1: BrunO
Os nomes digitados são diferentes
*/