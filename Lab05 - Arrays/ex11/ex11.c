#include <stdio.h>

int main(){
    int v[5], v1[5], v2[5], contPar=0, contImpar=0;
    printf("<< Pares e Ímpares >>\n");
    for (int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
    }
    // Atribui os pares ao novo vetor;
    for(int i = 0; i < 5; i++){
        if(v[i] % 2 == 0){
            v1[contPar] = v[i];
            contPar++;
        }
    }
    // Atribui os ímpares ao novo vetor;
    for(int i = 0; i < 5; i++){
        if(v[i] % 2 != 0){
            v2[contImpar] = v[i];
            contImpar++;
        }
    }    
    printf("\nImpares: ");
    for(int i = 0; i < contImpar; i++){
        printf("%d ", v2[i]);
        if(i<contImpar-1)
            printf(", ");
        else
            printf("\n");
    }  
    printf("Pares: ");
    for(int i = 0; i < contPar; i++){
        printf("%d", v1[i]);
        if(i<contPar-1)
            printf(", ");
        else
            printf("\n");
    }  
    return 0;
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. 
Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que 
cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos 
são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.

Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/