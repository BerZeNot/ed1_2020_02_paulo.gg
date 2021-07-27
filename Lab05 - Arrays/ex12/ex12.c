#include <stdio.h>

int main(){
    double bolinhas[4], totalBolinhas=0, probabilidades[4];
    int maiorProb;
    char percent = '%';
    printf("<< Probabilidades >>\n");
    printf("Digite a quantidade de bolinhas\n");
    printf("Verde: ");
    scanf("%lf", &bolinhas[0]);
    printf("Azul: ");
    scanf("%lf", &bolinhas[1]);
    printf("Amarela: ");
    scanf("%lf", &bolinhas[2]);
    printf("Vermelha: ");
    scanf("%lf", &bolinhas[3]);

    // soma o total de bolinhas
    for (int i = 0; i < 4; i++){
        totalBolinhas += bolinhas[i];
    }
    
    for (int i = 0; i < 4; i++){
        probabilidades[i] = (bolinhas[i] / totalBolinhas) * 100.0;
        if(i==0){
            maiorProb = i;
        } else if(probabilidades[i] > maiorProb){
            maiorProb = i;
        }
    }
    
    printf("Probabilidades\n");
    for(int i = 0; i < 4; i++){
        if(i==0){
            printf("Verde: %.1lf%c", probabilidades[0], percent); 
            if(i == maiorProb)
                printf(" << Maior probabilidade");
        } else if(i==1){
            printf("Azul: %.1lf%c", probabilidades[1], percent);
            if(i == maiorProb)
                printf(" << Maior probabilidade");
        } else if(i==2){
            printf("Amarela: %.1lf%c", probabilidades[2], percent);
            if(i == maiorProb)
                printf(" << Maior probabilidade");      
        } else if(i==3){
            printf("Vermelha: %.1lf%c", probabilidades[3], percent);
            if(i == maiorProb)
                printf(" << Maior probabilidade");
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>
Digite a quantidade de bolinhas
Verde: 5    
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/