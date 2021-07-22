#include <stdio.h>

int main(){
    int cont = 10;
    printf("<< Contagem regressiva >>\n");
    do{
        printf("%d.. ", cont);
        cont--;
    } while(cont >=0);
    printf("FIM!\n");
    return 0;
}

/*
    Refaça o exercício anterior utilizando o comando do .. while;
*/