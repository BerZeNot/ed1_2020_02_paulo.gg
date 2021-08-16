#include <stdio.h>
#include <math.h>
// Falta terminar
int main(){
    int cont = 0, qtdTermos;
    long int fatAtual = 0;
    double nepAtual = 1;

    printf("<< Numero neperiano >>\n");
    printf("Entre com o número de termos: ");
    scanf("%d", &qtdTermos);

    printf("nepAtual: %lf\n", nepAtual);
    while(cont <= qtdTermos){
        for(int i = cont; i >0; i--){
            if(i==0){
                fatAtual = 1;
                printf("Fat em 0\n");
            } else {
                fatAtual = fatAtual * i;
            }
        }
        nepAtual = nepAtual + (1.0/fatAtual);
        printf("nepAtual: %lf\n", isinf(nepAtual));
        printf("1/fatAtual = %lf\n", (1.0/fatAtual));
        printf("%d! = %ld\n", cont, fatAtual);

        cont++;
        fatAtual = 1;
    }
    printf("e~ %lf\n", isinf(nepAtual));
    return 0;
}

/* 

*/