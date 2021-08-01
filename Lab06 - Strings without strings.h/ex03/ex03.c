#include <stdio.h>

int main(){
        char nome[50], c;
    int pos = 0;
    printf("<< Vetor de char>>\n");
    printf("Digite um nome: ");
    c = getchar();
    while(c != '\n'){
        nome[pos] = c;
        pos++;
        c = getchar();
    }

    // laço para alterar as letras do nome
    for (int i = 0; i < pos; i++){
        if(nome[i]<=90 && nome[i] >= 65){
            continue;
        } else {
            nome[i] = nome[i]-32;
        }
    }
    

    printf("O nome digitado é: ");
    for(int i = 0; i < pos; i++){
        printf("%c", nome[i]);
        if(i==pos-1)
            printf("\n");
    }
    return 0;
}

/*
Faça um programa semelhante ao anterior, só que o nome digitado deve ser mostrado 
em letras maiúsculas (pense como fazer isso olhando a diferença entre os valores 
dos caracteres minúsculos e maiúsculos na tabela ASCII). Não usar as funções de string.h

Exemplo de saída:

<< Vetor de char>>
Digite um nome: Bruno
O nome digitado é: BRUNO
*/