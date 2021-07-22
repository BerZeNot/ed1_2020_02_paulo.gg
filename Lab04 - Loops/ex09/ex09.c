#include <stdio.h>

int main(){
    int cont;
    printf("<< Contagem progressiva até 0 >>\n");
    printf("Qual é o número inicial? ");
    scanf("%d", &cont);
    for(cont; cont <=0; cont++){
        printf("%d.. ", cont);
    }
    printf("FIM!\n");
    return 0;
}

/*
    Refaça o exercício anterior utilizando o comando for
*/