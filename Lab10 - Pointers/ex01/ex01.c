#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int val[5] = {2,4,5,8,10};
    unsigned long int end5 = &val[2];
    printf("\nDigite um valor para substituir %d: ", val[2]);
    scanf("%u", end5);
    printf("Novo valor de val[2]: %u\n", val[2]);
    return 0;
}

/*
Crie um programa que contenha a seguinte variável
int val[5] = {2,4,5,8,10};
                  ^
Utilizando a função scanf, altere o valor de 5 para 6. 
Não use o operador & no scanf. Utilize uma variável do tipo inteira*
para guardar o endereço da posição do vetor.

*obs:
unsigned int (para programas em 32bit)
unsigned long int (para programas em 64)

*/