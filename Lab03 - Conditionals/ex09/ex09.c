#include<stdio.h>

int main(){
    float valorDaVenda, comissao;
    printf("<< Cálculo de comissão >>\n");
    printf("Informe o valor de vendas: R$ ");
    scanf("%f", &valorDaVenda);
    if(valorDaVenda >= 100000.0){
        comissao = 700.0 + (valorDaVenda*0.16);
    } else if(valorDaVenda < 100000.0 && valorDaVenda >= 80000.0){
        comissao = 650.0 + (valorDaVenda*0.14);
    } else if(valorDaVenda < 80000.0 && valorDaVenda >= 60000.0){
        comissao = 600.0 + (valorDaVenda*0.14);
    } else if(valorDaVenda < 60000.0 && valorDaVenda >= 40000.0){
        comissao = 550.0 + (valorDaVenda*0.14);
    } else if(valorDaVenda < 40000.0 && valorDaVenda >=20000.0){
        comissao = 500.0 + (valorDaVenda*0.14);
    } else {
        comissao = 400.0 + (valorDaVenda*0.14);
    }
    printf("Valor da comissão: R$ %.2f\n", comissao);

}

/*
    Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor.
*/