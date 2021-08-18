#include <stdio.h>

struct pontos{
    float x;
    float y;
};

struct pontos *alocaVetorPontos(int tamanho){
    struct pontos *p;
    p = (struct pontos *)malloc(tamanho*sizeof(struct pontos));
    for(int i=0; i<tamanho; i++){
        p[i].x = 0;
        p[i].y = 0;
    }
    return p;
}

void imprimePontos(struct pontos *p, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("(%.f,%.f)",p[i].x, p[i].y);
        if(i<tamanho-1){
            printf(", ");
        } else {
            printf("\n");
        }
    }
}

int main(){
    int tamanho;
    struct pontos *p;
    printf("Digite quantos pontos(x,y) você deseja: ");
    scanf("%d", &tamanho);

    p = alocaVetorPontos(tamanho);
    imprimePontos(p, tamanho);
    return 0;
}

/*
=> Crie uma função para alocar dinamicamente um vetor de n 
pontos e inicialize esses pontos como (0,0).

No programa principal, solicite ao usuário quantos pontos deseja.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite quantos pontos(x,y) você deseja: 2
(0,0) , (0,0) 
-------------------------------------------------------------------------------
*/