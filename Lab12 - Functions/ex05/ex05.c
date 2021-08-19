#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadradoPerfeito(int *numero){
    int raizInteira;
    float raiz;
    raiz = sqrt(*numero);
    raizInteira = raiz;
    if(raiz == raizInteira){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int num;
    printf("Digite o valor de n: ");
    scanf("%d", &num);
    if(quadradoPerfeito(&num)==1){
        printf("O numero %d eh um quadrado perfeito\n", num);
    } else {
        printf("O numero %d não eh um quadrado perfeito\n", num);
    }
    return 0;
}

/*
=> Faça uma função para verificar se um número 
é um quadrado perfeito (retorne Verdadeiro caso seja).   

Ex: QuadradoPerfeito(4) retorna verdadeiro; 
    QuadradoPerfeito(10) retorna falso; 

obs: Pode-se retornar os valores 0 (para verdadeiro) e 1 (para falso).

No programa principal, solicite ao usuário o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de n: 4
O numero 4 eh um quadrado perfeito
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de n: 10
O numero 10 não eh um quadrado perfeito
-------------------------------------------------------------------------------
*/