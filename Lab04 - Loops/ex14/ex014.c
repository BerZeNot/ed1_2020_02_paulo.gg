#include <stdio.h>

int main(){
    int numero, qtdDivisores=0;
    printf("<< Números primos >>\n");
    printf("Entre com o valor: ");
    scanf("%d", &numero);
    for(int i = 1; i<=numero; i++){
        if(numero % i == 0){
            qtdDivisores++;
        }
    }
    if(qtdDivisores==2)
        printf("O número %d é primo\n", numero);
    else
        printf("O número %d não é primo\n", numero);



    return 0;
}

/*
    Dado um inteiro positivo p, verificar se p é primo.

    Exemplo de saída:
    << Números primos >>
    Entre com o valor: 15
    O número 15 não é primo
*/