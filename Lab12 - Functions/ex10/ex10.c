#include <stdio.h>
#include <stdlib.h>

struct pontos{
    float x;
    float y;
};

void imprime_ponto(struct pontos p){
    printf("O ponto digitado eh: (%.0f,%.0f)\n", p.x, p.y);
}

int main(){
    struct pontos p;
    printf("Digite o valor de x: ");
    scanf("%f", &p.x);
    printf("Digite o valor de y: ");
    scanf("%f", &p.y);
    imprime_ponto(p);
    return 0;
}

/*
Observação: Para os próximos exercícios, crie uma struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função chamada imprime_ponto, que recebe uma 
struct do tipo ponto e mostra na tela o ponto no seguinte formato 
(ponto.x, ponto.y)

Exemplo de chamada da função:
imprime_ponto(p)

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 10
Digite o valor de y: 5
O ponto digitado eh: (10,5)
-------------------------------------------------------------------------------
*/