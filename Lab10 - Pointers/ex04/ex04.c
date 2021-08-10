#include <stdio.h>

int main(){
    int val[5] = {2,4,5,8,10};
    int *p;
    printf("<< Pointers >>\n");
    printf("Vetor antes da subtração com desreferenciamento:\n");
    for(int i=0; i <5; i++){
        printf("val[%d]: %d\n", i, val[i]);
    }
    printf("\nVetor depois da subtração com desreferenciamento:\n");
    for(int i=0; i<5; i++){
        p = &val[i];
        *p -=1;
        printf("val[%d]: %d\n", i, val[i]);
    }
    return 0;
}