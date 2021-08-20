#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra

// Definir as estruturas necessárias aqui:

struct livros{
    char nome[50];
    float preco;
    int novo; // 0 - não novo | 1 - novo
    int ano;
};


void leLivros(struct livros *vetLivros, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("\nDigite o nome do livro: ");
        setbuf(stdin, NULL);
        gets(vetLivros[i].nome);
        printf("Digite o preço do livro: ");
        scanf("%f", &vetLivros[i].preco);
        printf("O livro é novo? (1-Sim | 2-Não): ");
        scanf("%d", &vetLivros[i].novo);
        printf("Digite o ano do livro: ");
        scanf("%d", &vetLivros[i].ano);

    }
}

void mostraDados(struct livros *vetLivros, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("\n-------------------------------\n");
        printf("Livro %d\n", i+1);
        printf("Nome: %s\n", vetLivros[i].nome);
        printf("Preço: R$ %.2f\n", vetLivros[i].preco);
        printf("Novo: ");
        if(vetLivros[i].novo==1){
            printf("Sim\n");
        } else {
            printf("Não\n");
        }
        printf("Ano: %d\n", vetLivros[i].ano);
    }
}
int main(){
    int quantidadeLivros;
    struct livros *vetLivros;
    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d", &quantidadeLivros);
    vetLivros = (struct livros *)malloc(quantidadeLivros*sizeof(struct livros));
    leLivros(vetLivros, quantidadeLivros);

    mostraDados(vetLivros, quantidadeLivros);
    free(vetLivros);
    return 0;
}