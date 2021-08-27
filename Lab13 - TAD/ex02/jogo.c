#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo.h"

typedef struct jogo{
    char nome[50];
    char fabricante[50];
    float preco;
    int idade_minima;
} jogo;

jogo *criaJogo(char *nome, char *fabricante, float preco, int idade_minima){
    jogo *jgTemp = malloc(1*sizeof(jogo));
    strcpy(jgTemp->nome, nome);
    strcpy(jgTemp->fabricante, fabricante);
    jgTemp->preco =  preco;
    jgTemp->idade_minima =  idade_minima;

    return jgTemp;
}

int apagaJogo(jogo *jg){
    if(jg!=NULL){
        free(jg);
        return 0;
    } else {
        return -1;
    }
}

void getInfo(jogo *jg1){
    printf("\n---------------------------------------------------------------\n");
    printf("Nome: %s\n", jg1->nome);
    printf("Fabricante: %s\n", jg1->fabricante);
    printf("Preço: R$ %.2f\n", jg1->preco);
    printf("Indicado para publico a partir de %d anos\n",jg1->idade_minima);
    printf("---------------------------------------------------------------\n");
}