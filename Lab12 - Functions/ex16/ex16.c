#include <stdio.h>
#include <string.h>

struct pontos{
    float x;
    float y;
};

void inc_dir(struct pontos *p, int direction){
    if(direction==0){
        printf("(%.f,%.f) sudeste => ", p->x, p->y);
        p->x = p->x + 1;
        p->y = p->y - 1;
        printf("(%.f,%.f)\n",p->x, p->y);

    } else if(direction==1){
        printf("(%.f,%.f) sudoeste => ", p->x, p->y);
        p->x = p->x - 1;
        p->y = p->y - 1;
        printf("(%.f,%.f)\n",p->x, p->y);
    } else if(direction==2){
        printf("(%.f,%.f) nordeste => ", p->x, p->y);
        p->x = p->x + 1;
        p->y = p->y + 1;
        printf("(%.f,%.f)\n",p->x, p->y);
        
    } else if(direction==3){
        printf("(%.f,%.f) noroeste => ", p->x, p->y);
        p->x = p->x - 1;
        p->y = p->y + 1;
        printf("(%.f,%.f)\n",p->x, p->y);

    } else {
        printf("Direção inválida\n");
    }
}

int main(){
    struct pontos p;
    char direction[9];
    printf("Digite a coordenada x: ");
    scanf("%f", &p.x);
    printf("Digite a coordenada y: ");
    scanf("%f", &p.y);
    printf("Digite a direção para mover o ponto: ");
    setbuf(stdin, NULL);
    gets(direction);
    if(strcmp(direction, "sudeste")==0){
        inc_dir(&p, 0);
    } else if(strcmp(direction, "sudoeste")==0){
        inc_dir(&p, 1);
    } else if(strcmp(direction, "nordeste")==0){
        inc_dir(&p, 2);
    } else if(strcmp(direction, "noroeste")==0){
        inc_dir(&p, 3);
    }
    return 0;
}

/*
=> Crie um procedimento para andar na diagonal (sudeste, 
sudoeste, nordeste, noroeste). Use obrigatoriamente as funções do 
exercício anterior.

Exemplo de chamada:
ind_diag(p,"sudeste"); 
ind_diag(p,"sudoeste");

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) sudeste => (2,2)
(2,4) sudoeste => (1,3)
-------------------------------------------------------------------------------
*/