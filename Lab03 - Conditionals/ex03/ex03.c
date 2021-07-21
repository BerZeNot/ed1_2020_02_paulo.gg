#include<stdio.h>

int main(){
    float valorProduto;
    int codEstado;

    printf("<<  Valor do Produto com imposto >>\n");
    printf("Digite o valor do produto R$: ");
    scanf("%f", &valorProduto);
    printf("Digite a unidade da federação: ");
    scanf("%d", &codEstado);
    if(codEstado == 1){
        printf("Valor final com impostos R$: %.2f\n", valorProduto+(valorProduto*0.07));
    } else if(codEstado == 2){
        printf("Valor final com impostos R$: %.2f\n", valorProduto+(valorProduto*0.12));
    } else if(codEstado == 3){
        printf("Valor final com impostos R$: %.2f\n", valorProduto+(valorProduto*0.15));
    } else if(codEstado == 4){
        printf("Valor final com impostos R$: %.2f\n", valorProduto+(valorProduto*0.08));
    } else {
        printf("Código do estado inválido! Use os seguintes valore:\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n");
    }
    
}

/*
    Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado 
    possui uma taxa diferente de imposto sobre o produto (1-MG 7%; 2-SP 12%; 3-RJ 15%; 
    4-MS 8%). Faça um programa em que o usuário entre com o valor e o código do estado 
    destino do produto e o programa retorne o preço final do produto acrescido 
    do imposto do estado em que ele será vendido. Se o código do estado digitado não for 
    válido, mostrar uma mensagem de erro

    Exemplo de saída:
    <<  Valor do Produto com imposto >>
    Digite o valor do produto R$: 100.00
    Digite a unidade da federação: 1 
    Valor final com impostos R$: 107.00
*/