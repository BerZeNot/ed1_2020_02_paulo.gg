#include <stdio.h>

// Corrigir depois
int main(){
    int vetor[8], noRepeat[8], cont=0;
    printf("<< Valores iguais >>\n");
    for(int i=0; i<8; i++){
        printf("Entre com o numero %i: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 8; i++){
        if(i==0){
            noRepeat[i] = vetor[i];
            cont++;
        } else {
            for(int i = 0; i < cont; i ++){
                if(vetor[i] != noRepeat[i]){
                    continue;
                } else {
                    noRepeat[i+1] = vetor[i];
                    cont++;
                    break;
                }  
            }
        }
    }

    printf("Valores repetidos: ");
    for(int i = 0; i < cont; i++){
        printf("%d -", noRepeat[i]);
    }
    
    return 0;
}

/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/