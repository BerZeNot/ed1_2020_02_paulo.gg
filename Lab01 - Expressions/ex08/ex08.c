#include <stdio.h>

int main() {
    int dias_trabalhados;
    float valor_bruto, valor_liquido, IR, ISS;
    printf("<< Pagamento encanador >>\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);
    valor_bruto = dias_trabalhados * 30;
    ISS = valor_bruto * 0.04;
    IR = (valor_bruto - ISS) * 0.08;
    valor_liquido = valor_bruto - (IR + ISS);

    printf("Valor bruto R$: %.0f\n", valor_bruto);
    printf("Valor liquido R$: %.2f\n", valor_liquido);
    printf("ISS R$: %.0f\n", ISS);
    printf("IR R$: %.2f\n", IR);
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/