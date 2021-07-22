#include <stdio.h>

int main(){
    printf("<< Contagem regressiva >>\n");
    for(int cont=10; cont >=0; cont--){
        printf("%d.. ", cont);
    }
    printf("FIM\n");

    return 0;
}

/*
    Refaça o exercício anterior utilizando o comando for
*/