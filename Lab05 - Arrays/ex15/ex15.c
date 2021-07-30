#include <stdio.h>

// Corrigir depois
int main(){
    int valoresIn[8], valoresOut[8], cont=0, posVetOut=0;
    printf("<< Valores iguais >>\n");
    for(int i=0; i < 8; i++){
        printf("Entre com o número %d: ", i+1);
        scanf("%d", &valoresIn[i]);
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(valoresIn[i] == valoresIn[j]){
                cont++;
            }
        }
        if(cont>1){
            valoresOut[posVetOut] = valoresIn[i];
            cont = 0;
            posVetOut++;
        }
        cont = 0;
    }
    printf("Valores repetidos: ");
    for (int i = 0; i < posVetOut; i++){
        printf("%d ", valoresOut[i]);
    }
    printf("\n");
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