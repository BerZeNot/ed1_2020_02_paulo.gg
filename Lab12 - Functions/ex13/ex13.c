#include <stdio.h>
#include <stdlib.h>

struct pontos{
    float x;
    float y;
};

float calc_area(struct pontos *p1, struct pontos *p2){
    float area, l1, l2;
    if(p1->x > p2->x){
        l1 = p1->x - p2->x;
    } else {
        l1 = p2->x - p1->x;
    }

    if(p1->y > p2->y){
        l2 = p1->y - p2->y;
    } else {
        l2 = p2->y - p1->y;
    }
    area = l1*l2;
    return area;
}

int main(){
    struct pontos p1, p2;
    float area;
    printf("<< Calculo de Area >>\n");
    printf("Digite a coordenada x do ponto 1: ");
    scanf("%f", &p1.x);
    printf("Digite a coordenada y do ponto 1: ");
    scanf("%f", &p1.y);
    printf("Digite a coordenada x do ponto 2: ");
    scanf("%f", &p2.x);
    printf("Digite a coordenada y do ponto 2: ");
    scanf("%f", &p2.y);
    area = calc_area(&p1,&p2);
    printf("A area do retangulo definido por (%.2f, %.2f) e (%.2f, %.2f) eh %.2f\n", p1.x, p1.y, p2.x, p2.y, area);
    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função que calcule a área do retângulo definido por 
dois pontos. 

Cabeçalho: area = calc_area(p1,p2)


-------------------------------------------------------------------------------
Exemplo de Saída:

<< Calculo de Area >>
Digite a coordenada x do ponto 1: 1
Digite a coordenada y do ponto 1: 4
Digite a coordenada x do ponto 2: 4
Digite a coordenada y do ponto 2: 2

A area do retangulo definido por (1.00, 4.00) e (4.00, 2.00) eh 6.00
-------------------------------------------------------------------------------
*/
