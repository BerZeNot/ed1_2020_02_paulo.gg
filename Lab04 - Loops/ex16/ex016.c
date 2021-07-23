#include <stdio.h>
#include <math.h>
int main(){
    double valorInicial=1; 
    printf("<< Endereços de memória por bits >>\n");
    for(int i=0; i<8; i++){
        if(valorInicial==1)
            printf("Com %.0f bit é possível endereçar %.0f posições de memória\n",valorInicial, pow(2, valorInicial));
        else
            printf("Com %.0f bits é possível endereçar %.0f posições de memória\n", valorInicial, pow(2, valorInicial));
        valorInicial = valorInicial*2;
    }
    return 0;
}

/* 
     Faça um algoritmo que mostre qual a quantidade máxima de endereços de memória 
     que um computador com 1, 2, 4, 8, 16, 32, 64 e 128 bits pode representar. 
     O programa deve conter um loop e uma variável.  Use a função pow()

     Exemplo de saída:
     Com 2 bits é possível endereçar 4 posições de memória
     Com 4 bits é possível endereçar 16 posições de memória 
     Com 8 bits é possível endereçar 256 posições de memória
     Com 16 bits é possível endereçar 65536 posições de memória
     Com 32 bits é possível endereçar 4294967296 posições de memória
     Com 64 bits é possível endereçar 1.84467440737096E19 posições de memória
     Com 128bits é possível endereçar 3.40282366920938E38posições de memória
*/