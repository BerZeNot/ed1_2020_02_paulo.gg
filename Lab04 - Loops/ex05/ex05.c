#include <stdio.h>

int main(){
    int cont;
    printf("<< Contagem regressiva >>\n");
    printf("Qual é o número inicial? ");
    scanf("%d", &cont);
    do {
        printf("%d.. ", cont);
        cont--;
    } while(cont >=0);
    printf("FIM!\n");
    return 0;
}

/*
    Refaça o exercício anterior utilizando o comando do .. while;
*/