#include <stdio.h>

int main(){
    int cont;
    printf("<< Contagem progressiva até 0>>\n");
    printf("Qual é o número inicial? ");
    scanf("%d", &cont);
    if(cont > 0)
        cont = cont*-1;

    while(cont <= 0){
        printf("%d.. ", cont);
        cont++;
    }
    printf("FIM!\n");
    return 0;
}

/*
    Faça um algoritmo utilizando o comando while que mostra uma contagem 
    progressiva na tela, iniciando em um valor que o usuário determina e 
    terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.

    Exemplo de saída:
    << Contagem progressiva até 0>>
    Qual é o número inicial? -5
    -5.. -4.. -3.. -2.. -1.. 0.. FIM!
*/