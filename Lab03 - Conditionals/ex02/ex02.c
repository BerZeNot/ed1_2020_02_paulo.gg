#include<stdio.h>

int main(){
    char unidade;
    float tmpInicial, tmpConvertida; 
    // Fórmula para converter de Graus C para Graus F:
    // °F = °C ∗ (9.0/5.0)+ 32.0,
    printf("Digite a temperatura: ");
    scanf("%f", &tmpInicial);
    printf("Digite a unidade: ");
    scanf(" %c", &unidade);
    
    if(unidade == 'c'){
        tmpConvertida = tmpInicial * (9.0/5.0) + 32.0;
        printf("%.1f graus Celsius equivale a %.1f graus Fahrenheit\n", tmpInicial, tmpConvertida);

    } else if(unidade == 'f'){
        // Fórmula para converter de Graus F para Graus C:
        // °C = (°F − 32) ÷ 1,8
        tmpConvertida = (tmpInicial - 32) / 1.8;
        printf("%.1f graus Fahrenheit equivale a %.1f graus Celsius\n", tmpInicial, tmpConvertida);
    } else {
        printf("Unidade inválida! Use c p/ Celsius e f p/ Fahrenheit\n");
    }
}

/*
    2)Faça um algoritmo que realiza a conversão entre de graus Celsius para Fahrenheit e 
    vice-versa. O usuário deve digitar o valor da temperatura e a unidade de medida 
    usada. O programa se encarrega de converter de uma unidade para a outra. Se a 
    unidade digitada não for válida, mostrar uma mensagem de erro.

    Exemplo de saída:

    << Conversor de Temperatura >>
    Digite a temperatura: 30
    Digite a unidade: c
    30 graus Celsius equivale a 86 graus Fahrenheit

    Exemplo de saída:
    << Conversor de Temperatura >>
    Digite a temperatura: 86
    Digite a unidade: f
    86 graus Fahrenheit equivale a 30 graus Celsius 
*/