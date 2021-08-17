#include <stdio.h>
#include <stdlib.h>
struct pontos{
    float x;
    float y;
};

struct pontos soma_ponto(struct pontos p1, struct pontos p2){
    struct pontos p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    return p3;
}

void imprime_ponto(struct pontos p1, struct pontos p2, struct pontos p3){
    printf("A soma de (%.f,%.f) com (%.f,%.f) eh (%.f,%.f)\n", p1.x, p1.y, p2.x, p2.y,p3.x,p3.y);
}

int main(){
    struct pontos p1, p2, p3;
    printf("Digite o valor de x1: ");
    scanf("%f", &p1.x);
    printf("Digite o valor de y1: ");   
    scanf("%f", &p1.y);
    printf("Digite o valor de x2: ");
    scanf("%f", &p2.x);
    printf("Digite o valor de y2: ");
    scanf("%f", &p2.y);
    p3 = soma_ponto(p1, p2);
    imprime_ponto(p1, p2, p3);
    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faca uma função que some dois pontos e retorne o resultado 
da soma. Mostre os 3 pontos usando a função imprime_ponto.

Exemplo:
ponto p1, p2, p3;
p3= soma_ponto(p1,p2);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x1: 1
Digite o valor de y1: 2
Digite o valor de x2: 3
Digite o valor de y2: 4
A soma de (1,2) com (3,4) eh (4,6)
-------------------------------------------------------------------------------
*/