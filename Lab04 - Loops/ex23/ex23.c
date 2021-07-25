#include <stdio.h>
// Falta terminar
int main(){
    int cont = 1, qtdTermos;
    long int fatAtual = 1;
    long double nepAtual = 1;

    printf("<< Numero neperiano >>\n");
    printf("Entre com o número de termos: ");
    scanf("%d", &qtdTermos);
    while(cont <= qtdTermos){
        for(int i = cont; i > 0; i--){
            fatAtual = fatAtual * i;
        }
        nepAtual = nepAtual + (1/fatAtual);
        printf("Somando %lf ao nep atual\n", nepAtual);
        printf("%d! = %ld\n", cont, fatAtual);

        cont++;
        fatAtual = 1;
    }
    printf("e~ %lf\n", nepAtual);
    return 0;
}

/* 

*/