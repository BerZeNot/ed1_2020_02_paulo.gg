#include <stdio.h>
#include <string.h>
#include "jogo.h"

int main()
{   
    char nome[50];
    char fabricante[50];
    float preco;
    int idade_minima;
    jogo *jg1;

    printf("Digite o nome do jogo: ");
    setbuf(stdin, NULL);
    gets(nome);
    printf("Digite o nome do Fabricante: ");
    setbuf(stdin, NULL);
    gets(fabricante);
    printf("Digite o preço do jogo: R$ ");
    scanf("%f", &preco);
    printf("Digite a idade mínima recomendada para o jogo: ");
    scanf("%d", &idade_minima);
    
    printf("\nAlocando memória Informações..");
    jg1 = criaJogo(nome, fabricante, preco, idade_minima);
    
    printf("\nAcessando Informações..");
    getInfo(jg1);
    
    printf("Apagando Informações..\n");
    int status = apagaJogo(jg1);
    if(status == 0)
        printf("Informações apagadas com sucesso!\n");
    else{
        printf("Problemas ao apagar as informações do jogo\n");
    }
    
    return 0;
}
