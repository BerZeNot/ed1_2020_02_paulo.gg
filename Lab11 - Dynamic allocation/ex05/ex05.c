#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas

struct coordenadas{
    int x;
    int y;
};

int main(){
    int i, n;
    struct coordenadas *pontos, *maisAcima, *maisAbaixo, *maisAEsquerda, *maisADireita;

    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &n);
    pontos = (int *)malloc(n*sizeof(struct coordenadas));
    
    for(i=0; i<n; i++){
        printf("\nEntre com a coordenada x do ponto %d: ", i+1);
        scanf("%d", &pontos[i].x);
        printf("Entre com a coordenada y do ponto %d: ", i+1);
        scanf("%d", &pontos[i].y);
    }
    for(i=0; i<n; i++){
        if(i==0){
            maisAcima = &pontos[i];
            maisAbaixo = &pontos[i];
            maisAEsquerda = &pontos[i];
            maisADireita = &pontos[i];
        } else {
            // Verifica a necessidade de atualizar o valor mais acima
            if(pontos[i].y > maisAcima->y){
                maisAcima = &pontos[i];
            }
            // Verifica a necessidade de atualizar o valor mais abaixo
            if(pontos[i].y < maisAbaixo->y){
                maisAbaixo = &pontos[i];
            }
            // Verifica a necessidade de atualizar o valor mais à esquerda
            if(pontos[i].x < maisAEsquerda->x){
                maisAEsquerda = &pontos[i];
            }
            // Verifica a necessidade de atualizar o valor mais à direita
            if(pontos[i].x > maisADireita->x){
                maisADireita = &pontos[i];
            }
        }
    }
    printf("\nPontos digitados: ");
    for(i=0; i<n; i++){
        if(i==n-1){
            printf("(%d,%d)\n", pontos[i].x, pontos[i].y);
        } else {
            printf("(%d,%d); ", pontos[i].x, pontos[i].y);
        }
    }
    printf("Ponto mais a esquerda: (%d,%d)\n", maisAEsquerda->x, maisAEsquerda->y);
    printf("Ponto mais a direita: (%d,%d)\n", maisADireita->x, maisADireita->y);
    printf("Ponto mais acima: (%d,%d)\n", maisAcima->x, maisAcima->y);
    printf("Ponto mais abaixo: (%d,%d)\n", maisAbaixo->x, maisAbaixo->y);
    return 0;
}

/*
5) Modifique o programa anterior incluindo quatro ponteiros, que apontarão para
os seguintes pontos: mais a esquerda, mais a direita, mais acima, mais abaixo.
Mostre quem são esses pontos utilizando esses ponteiros.

Exemplo de saída:
<< Vetor de pontos alocados dinamicamente >>
Digite a quantidade de pontos a serem armazenados: 5

Digite o valor da coordenada x do ponto 1: 2
Digite o valor da coordenada y do ponto 1: 5

Digite o valor da coordenada x do ponto 2: 4
Digite o valor da coordenada y do ponto 2: 8

Digite o valor da coordenada x do ponto 3: 3
Digite o valor da coordenada y do ponto 3: 4

Digite o valor da coordenada x do ponto 4: 6
Digite o valor da coordenada y do ponto 4: 7

Digite o valor da coordenada x do ponto 5: 23
Digite o valor da coordenada y do ponto 5: 25


Os pontos digitados sao: (2,5); (4,8); (3,4); (6,7); (23,25)

Ponto mais a esquerda: (2,5)
Ponto mais a direita: (23,25)
Ponto mais acima: (23,25)
Ponto mais abaixo: (3,4)

*/