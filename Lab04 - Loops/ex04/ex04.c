#include <stdio.h>

int main(){
    int cont;
    printf("<< Contagem regressiva >>\n");
    printf("Qual é o número inicial? ");
    scanf("%d", &cont);
    while(cont >=0){
        printf("%d.. ", cont);
        cont--;
    }
    printf("FIM!\n");
    return 0;
}

/*
    Faça um algoritmo utilizando o comando while que mostra uma contagem 
    regressiva na tela, iniciando em um valor que o usuário determina e 
    terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.

    Exemplo de saída:
    << Contagem regressiva >>
    Qual é o número inicial? 12
    12.. 11.. 10.. 9.. 8.. 7.. 6.. 5.. 4.. 3.. 2.. 1.. 0.. FIM!
*/