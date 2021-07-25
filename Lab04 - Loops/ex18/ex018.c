#include <stdio.h>

int main(){
    float velocidade;
    char option;
    int execute = 1;
    do{
        printf("<< Conversor >>\n");
        printf("Digite uma opção\n");
        printf("1 - para converter de km/h para m/s\n");
        printf("2 - para converter de m/s para km/h\n");
        printf("q - para sair\n");
        scanf(" %c", &option);
        if(option=='1'){
            printf("Digite a velocidade(km/h): ");
            scanf("%f", &velocidade);
            printf("A velocidade em m/s é %f\n", velocidade/3.6);
        } else if(option=='2'){
            printf("Digite a velocidade(km/h): ");
            scanf("%f", &velocidade);
            printf("A velocidade em km/h é %f\n", velocidade*3.6);
        } else if(option=='q'){
            return;
        }
    } while(execute);
    return 0;
}

/*
    Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa. 
    Você deve criar um menu com as duas opções de conversão e com uma opção para finalizar 
    o programa. O usuário poderá fazer quantas conversões desejar, sendo que o programa só 
    será finalizado quando a opção de finalizar for escolhida (no caso, caso ele escolha a opção ‘q’)
*/