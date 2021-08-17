#include <stdio.h>

struct pontos{
    float x;
    float y;
};

void inc_dir(struct pontos *p, char *direction){
    if(*direction=='n'){
        printf("(%.f,%.f) norte => ", p->x, p->y);
        p->y = p->y + 1;
        printf("(%.f,%.f)\n",p->x, p->y);
    } else if(*direction=='s'){
        printf("(%.f,%.f) norte => ", p->x, p->y);
        p->y = p->y - 1;
        printf("(%.f,%.f)\n",p->x, p->y);
    } else if(*direction=='l'){
        printf("(%.f,%.f) norte => ", p->x, p->y);
        p->x = p->x + 1;
        printf("(%.f,%.f)\n",p->x, p->y);
    } else if(*direction=='o'){
        printf("(%.f,%.f) norte => ", p->x, p->y);
        p->x = p->x - 1;
        printf("(%.f,%.f)\n",p->x, p->y);
    } else {
        printf("Direção inválida!\n");
    }
}

int main(){
    struct pontos p;
    char direction;
    printf("Digite a coordenada x: ");
    scanf("%f", &p.x);
    printf("Digite a coordenada y: ");
    scanf("%f", &p.y);
    printf("Digite a direção para mover o ponto: ");
    scanf(" %c", &direction);
    inc_dir(&p, &direction);
    return 0;
}

/*
=> Faça um procedimento chamado inc_dir, que faz o ponto 
andar uma unidade para leste, oeste, norte, sul (passar como 
referência e retorno void)

Exemplo de chamada:
inc_dir(p,'l'); // anda uma unidade para o leste (incrementa x)
inc_dir(p,'o'); // anda uma unidade para o oeste (decrementa x)

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) norte => (1,4)
(2,4) leste => (3,4)
-------------------------------------------------------------------------------
*/