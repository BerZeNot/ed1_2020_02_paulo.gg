#include <stdio.h>

int main(){
    int quantidadeASomar, aux, soma=0;
    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos números deseja somar? ");
    scanf("%d", &quantidadeASomar);
    aux = quantidadeASomar;
    for(int i = 1; i <= quantidadeASomar; i++){
        soma += i;
    }
    printf("A soma dos %d primeiros números naturais é: %d\n", aux, soma);
    return 0;
}

/*
    Refaça o exercício anterior utilizando o comando for
*/