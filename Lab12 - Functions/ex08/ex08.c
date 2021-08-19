#include <stdio.h>
#include <stdlib.h>

float incp(float y, float x){
    // printf("Y: %f\n",*y);
    // printf("X: %f\n",*x);
    if(x>0){
        y = y + (y*x);
        return y;
    } else if (x < 0){
        y = y - (y*x);
        return y;
    } else {
        return y;
    }
}   

int main(){
    float x,y;
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    printf("Digite o percentual de alteração x: ");
    scanf("%f", &x);
    incp(y, x);
    printf("O valor alterado eh: %.f\n", incp(y, x));
    return 0;
}

/*
=> Faça uma função que altere um valor de um número real em x%. Se 
o valor de x for negativo ele deve ser decrementado, se for positivo 
aumente.

Uso da função: 
x = incp(y,10);
z = incp(y,-20);

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de y: 100
Digite o percentual de alteracao: 0.10 // 0.10 equivale a 10%
O valor alterado eh: 110
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de y: -100
Digite o percentual de alteração: .10
O valor alterado eh: -110
-------------------------------------------------------------------------------
*/