#include <stdio.h>

int main(){
    int cont = 10;
    printf("<< Contagem regressiva >>\n");
    while(cont >=0){
        printf("%d.. ", cont);
        cont--;
    }
    printf("FIM!\n");
    return 0;
}

/*
    Faça um algoritmo utilizando o comando while que mostra uma contagem 
    regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma 
    mensagem “FIM!” após a contagem.

    Exemplo de saída:
    << Contagem regressiva >>
    10.. 9.. 8.. 7.. 6.. 5.. 4.. 3.. 2.. 1.. 0.. FIM!
*/