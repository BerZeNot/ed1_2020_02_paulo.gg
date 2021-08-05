#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char word[47]; // pneumoultramicroscopicossilicovulcanoconiótico -> maior palavra do PT-BR com 46 caracteres
    printf("<< Invertendo >>\n");
    printf("\nDigite a string: ");
    gets(word);
    
    printf("Saída invertida: ");
    for(int i = strlen(word); i >=0; i--){
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}

/*
Receba uma palavra e imprima de trás-para-frente
<<invertendo>>
Digite a string: Correios
Saída invertida: soierroC
*/