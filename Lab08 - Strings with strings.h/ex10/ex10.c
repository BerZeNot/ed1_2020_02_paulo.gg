#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[30], checkWord[30];
    int posWord, i=0, isPalindrome=1;
    printf("<< Palindromos >>\n");
    printf("\nDigite uma palavra: ");
    gets(word);
    posWord = strlen(&word)-1;

    for(int i=0; i< strlen(&word); i++){
        word[i] = tolower(word[i]);
    }
    for(i; word[i]!='\0'; i++){
        checkWord[i] = word[posWord];
        posWord--;
    }
    checkWord[i] = '\0';

    for(int i=0; i<strlen(&word); i++){
        if(strcmp(&word[i], &checkWord[i])==0){
            continue;
        } else {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome){
        printf("\n%s é palíndromo\n", word);
    } else {
        printf("\n%s não é palíndromo\n", word);
    }
    return 0;
}

/*
Faça um programa que dado uma string, imprima se ela for palíndromo ou não. 
Lembrando que: Um palíndromo é uma palavra que tem a propriedade de poder ser 
lida tanto da direita para a esquerda como da esquerda para a direita.

Ex: ovo, arara, Ana, Bob
*/