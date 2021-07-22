#include <stdio.h>

int main(){
    int quantidadeASomar, aux, soma=0;
    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos números deseja somar? ");
    scanf("%d", &quantidadeASomar);
    aux = quantidadeASomar;
    while (quantidadeASomar > 0){
        soma += quantidadeASomar;
        quantidadeASomar --;
    }
    printf("A soma dos %d primeiros números naturais é: %d\n", aux, soma);
    
    return 0;
}

/*
    Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais 
    (faça a soma utilizando while).

    Exemplo de saída:
    << Soma de n valores naturais >>
    Quantos números deseja somar? 5
    A soma dos 5 primeiros números naturais é : 15
*/