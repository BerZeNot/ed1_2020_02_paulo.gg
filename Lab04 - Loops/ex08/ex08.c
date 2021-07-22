#include <stdio.h>

int main(){
    int cont;
    printf("<< Contagem progressiva até 0>>\n");
    printf("Qual é o número inicial? ");
    scanf("%d", &cont);
    if(cont > 0)
        cont = cont*-1;

    do{
        printf("%d.. ", cont);
        cont++;
    } while(cont <= 0);
    printf("FIM!\n");
    return 0;
}

/*
    Refaça o exercício anterior utilizando o comando do .. while;
    Discuta por que o do-while não é a melhor estrutura para resolver este exercício.

    O laço de repetição "do while" não é a melhor estrutura para resolver o exercício
    pois ele executa o bloco de comandos pelo menos uma vez antes de fazer a verificação
    condicional. Caso o valor inserido pelo usuário seja algum que está fora do intervalo
    de números para a contagem progressiva até 0, ele será exibido.
    Ex.:
    Entrada 7
    Saída:
    7.. FIM!
    A saída esperada para esse caso deveria ser:
    0.. FIM!

    Na minha implementação, fiz uma condição que converterá a entrada do usuário para 
    um valor negativo equivalente caso a entrada seja maior que 0. Nesse caso, se o 
    usuário digitar, por exemplo o valor 7, o contador converterá a entrada para -7
    e iniciará a contagem progressiva do valor até 0. 
*/