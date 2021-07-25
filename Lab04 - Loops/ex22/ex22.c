#include <stdio.h>

int main(){
    int cont = 10; 
    long int fatAtual = 1;
    printf("<< Fatorial >>\n");
    while(cont <= 15){
        for(int i = cont; i > 0; i--){
            fatAtual = fatAtual * i;
        }
        printf("%d! = %ld\n", cont, fatAtual);
        cont++;
        fatAtual = 1;
    }

    return 0;
}

/*
    Altere o programa anterior para calcular o10! até 15!. 
    É esperado que ocorra um erro. Explique o motivo do erro 
    e qual a solução.

    Resposta:
    Ao implementar o programa calculador de fatorial utilizando uma
    variável do tipo int, o programa não exibe todos os valores corretamente
    a partir de um determinado valor de fatorial pois o tipo int com sinal 
    suporta somente valores até 2147483647. Ao ultrapassar esse valor, a 
    variável não é mais capaz de comportar valores corretamente. Para corrigir
    esse erro foi necessário utilizar uma variável do tipo long int com sinal, que suporta 
    valores até 9223372036854775807, o que permite exibir os fatoriais de 10 a 15 sem problemas. 

*/