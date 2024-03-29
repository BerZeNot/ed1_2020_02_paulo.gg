#include <stdio.h>
#include <stdlib.h>

void troque(int *a, int *b){
    int numA=*a;
    int numB=*b;
    *a = numB;
    *b = numA;
}

int main(){
    int a, b;
    printf("Digite o número A: ");
    scanf("%d", &a);
    printf("Digite o número B: ");
    scanf("%d", &b);
    troque(&a, &b);
    printf("O número A eh: %d\n", a);
    printf("O número B eh: %d\n", b);
    return 0;
}

/*
=> Faça um procedimento “Troque”, que recebe duas variáveis reais A e B
e troca o valor delas (i.e., A recebe o valor de B e B recebe o valor de A).
Mostre no programa principal o resultado da troca. 


No programa principal, solicite ao usuário o número A e o número B.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o número A: 2
Digite o número B: 5
O número A eh: 5
O número B eh: 2
-------------------------------------------------------------------------------
*/