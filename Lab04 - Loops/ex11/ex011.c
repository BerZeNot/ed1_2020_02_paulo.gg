#include <stdio.h>

int main(){
    int quantidadeASomar, aux, soma=0;
    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos números deseja somar? ");
    scanf("%d", &quantidadeASomar);
    aux = quantidadeASomar;
    do{
        soma += quantidadeASomar;
        quantidadeASomar--;
    } while(quantidadeASomar > 0);
    printf("A soma dos %d primeiros números naturais é: %d\n", aux, soma);
    return 0;
}

/*
    Refaça o exercício anterior utilizando o comando do .. while; 
*/