#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("<< É Triângulo? >>\n");
    printf("Digite o tamanho do lado A: ");
    scanf("%d", &a);
    printf("Digite o tamanho do lado B: ");
    scanf("%d", &b);
    printf("Digite o tamanho do lado C: ");
    scanf("%d", &c);
    if(a < 0 || b < 0 || c < 0){
        printf("Valor inválido informado! Informe apenas valores positivos.");
    } else if(a > (b + c) || b > (a + c) || c > (a + b)){
        printf("Nenhum triângulo é formado.\n");
    } else if(pow(a,2) == pow(b,2) + pow(c,2)){
        printf("É formado um triângulo retângulo.\n");
    } else if(pow(a,2) > pow(b,2) + pow(c,2)){
        printf("É formado um triângulo obtusângulo.\n");
    } else if(pow(a,2) < pow(b,2) + pow(c,2)){
        printf("É formado um triângulo acutângulo.\n");
    }
}

/*
    Ler o comprimento dos três lados de um triângulo (A,B,C) e determinar o tipo de 
    triângulo, com base nos seguintes casos:
    
    (i)Se algum dos lados for maior que a soma dos outros dois, nenhum triângulo é 
    formado    
    (ii)Se A2 = B2 + C2 é formando um triângulo retângulo
    (iii)Se A2 > B2 + C2 é formando um triangulo obtusângulo
    (iv)Se A2 < B2 + C2 é formando um triangulo acutângulo
    Caso um número negativo seja digitado, mostrar uma mensagem de erro
*/