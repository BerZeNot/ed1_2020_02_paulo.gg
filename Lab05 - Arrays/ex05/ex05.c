#include <stdio.h>

int main(){
    int valores[5], maior, menor, soma=0;
    float media;
    printf("<< 5 valores >>\n");
    for(int i = 0; i < 5; i++){
        printf("Entre com o número %d: ", i+1);
        scanf("%d", &valores[i]);
        if(i==0){ // inicializa o maior e o menor valor com o primeiro valor digitado
            maior = valores[i];
            menor = valores[i];
        } else {
            if(valores[i] > maior)
                maior = valores[i];

            if(valores[i] < menor)
                menor = valores[i];
        }
        soma += valores[i];
    }
    media = soma/5.0;
    printf("Os números digitados são: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\nO maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    printf("A média é: %.2f\n", media);
    return 0;
}


/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/