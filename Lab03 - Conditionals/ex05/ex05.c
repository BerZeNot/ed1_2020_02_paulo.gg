#include<stdio.h>
#include<math.h>

int main(){
    float massa, altura, imc;
    printf("<< Cálculo IMC >>\n");
    printf("Digite a massa(kg): ");
    scanf("%f", &massa);
    printf("Digite a altura(m): ");
    scanf("%f", &altura);

    imc = massa / pow(altura,2);

    if(imc < 18.5){
        printf("IMC: %.1f | Classificação: Magreza\n", imc);
    } else if(imc <=24.9){
        printf("IMC: %.1f | Classificação: Saudável\n", imc);
    } else if(imc <= 29.9){
        printf("IMC: %.1f | Classificação: Sobrepeso\n", imc);
    } else if(imc <= 34.9){
        printf("IMC: %.1f | Classificação: Obesidade Grau I\n", imc);
    } else if(imc <=39.9){
        printf("IMC: %.1f | Classificação: Obesidade Grau II (severa)\n", imc);
    } else {
        printf("IMC: %.1f | Classificação: Obesidade Grau III (morbida)\n", imc);
    }
}

/*
    Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de 
    acordo com a tabela abaixo:             IMC = massa(KG) / altura(m)²

       IMC -------- Classificação
    < 18,5 -------- Magreza
    18,5 - 24,9 --- Saudável
    25,0 - 29,9 --- Sobrepeso
    30,0 - 34,9 --- Obesidade Grau I
    35,0 - 39,9 --- Obesidade Grau II (severa)
    >= 40,0 ------- Obesidade Grau III (morbida)

    
*/