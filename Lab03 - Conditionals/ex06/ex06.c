#include<stdio.h>
#include<math.h>

int main(){
    int numero, raizInteira;
    float raiz;
    printf("<< Quadrados Perfeitos >>\n");
    printf("Digite um número: ");
    scanf("%d", &numero);
    raiz = sqrt(numero);
    raizInteira = raiz;
    
    if(raiz == raizInteira){
        printf("É quadrado Perfeito!\n");
        printf("Raiz de %d = %d \n", numero,raizInteira);
    } else {
        printf("%d não é quadrado Perfeito!\n", numero);
    }
}

/*
    Verificar se um número inteiro é um quadrado perfeito, exibindo, nos casos 
    afirmativos, sua raiz quadrada 
*/