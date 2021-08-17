#include <stdio.h>

struct pontos{
    float x;
    float y;
};

void multiplica(struct pontos *p1, struct pontos *pRes, int *constant){
    pRes->x = p1->x *(*constant);
    pRes->y = p1->y *(*constant);
}

int main(){
    struct pontos p1, pRes;
    int constant;
    printf("Digite o ponto: ");
    scanf("%f", &p1.x);
    scanf("%f", &p1.y);
    printf("Digite a constante: ");
    scanf("%d", &constant);
    multiplica(&p1, &pRes, &constant);
    printf("Resultado: (%.f,%.f) * %d = (%.f,%.f)\n", p1.x, p1.y, constant, pRes.x, pRes.y);
    return 0;
}

/*
=> Faça um procedimento que multiplique o valor de um ponto 
por uma constante e altere o valor do ponto. Deve ser usada 
passagem por referência e retorno void.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o ponto: 1,2
Digite a constante: 5
Resultado: (1,2) * 5 = (5,10)
-------------------------------------------------------------------------------
*/