#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vogal(char *letra){
    if(*letra == 'a'){return 1;} 
    else if(*letra == 'e'){return 1;} 
    else if(*letra == 'i'){return 1;} 
    else if(*letra == 'o'){return 1;} 
    else if(*letra == 'u'){return 1;} 
    else {return 0;}
}

int main(){
    char word[30], output[30];
    int posOutput=0;
    printf("<< Sem vogais >>\n");
    printf("\nDigite a string: ");
    gets(word);

    for(int i=0; word[i]!='\0'; i++){
        if(vogal(&word[i]) == 1){
            continue;
        } else {
            output[posOutput] = word[i];
            posOutput++;
        }
    }
    output[posOutput] = '\0';

    printf("\nSaída sem vogais: %s\n", output);
    return 0;
}

/*
Faça um programa que receba do usuario uma string. O programa imprime 
a string sem suas vogais.
Exemplo de saída:
<< Sem vogais >>
Digite a string : Correios
Saída sem vogais: Crrs
*/