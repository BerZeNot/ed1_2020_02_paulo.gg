#include <stdio.h>

int main() {
    int dias_trabalhados;
    float valor_bruto, valor_liquido, IR, ISS;
    printf("<< Pagamento encanador >>\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);
    valor_bruto = dias_trabalhados * 30;
    IR = valor_bruto *0.08;
    ISS = valor_bruto * 0.04;
    valor_liquido = valor_bruto - (IR + ISS);

    printf("Valor bruto R$: %.0f\n", valor_bruto);
    printf("Valor liquido R$: %.0f\n", valor_liquido);
    printf("ISS R$: %.0f\n", ISS);
    printf("IR R$: %.0f\n", IR);
    
}

/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/