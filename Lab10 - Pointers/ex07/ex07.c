#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    char nome[] = "José Augusto";
    char *letra = &nome[0];
    for(int i=0; nome[i]!='\0'; i++){
        printf("%c", *letra);
        letra = &nome[i]+1;
    }
    printf("\n");
    return 0;
}