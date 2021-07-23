#include <stdio.h>

int main(){
    int n, i, j, cont=0, multiplosExibidos=0;
    printf("<< Múltiplos >>\n");
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    printf("Entre com o valor de i: ");
    scanf("%d", &i);
    printf("Entre com o valor de j: ");
    scanf("%d", &j);
    printf("Os múltiplos de i ou j são: ");
    do{
        if(cont%i==0 || cont%j==0){
            printf("%d", cont);
            if(multiplosExibidos<n-1)
                printf(",");
            else
                printf("\n");
            multiplosExibidos++;
        }
        cont++;
    } while (multiplosExibidos < n);
    return 0;
}

/*
    Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir 
    em ordem crescente os n primeiros naturais que são múltiplos de i ou de j 
    e ou de ambos.  
    Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8.

    Exemplo de saída:
    << Múltiplos >>
    Entre com o valor de n: 6
    Entre com o valor de i: 2
    Entre com o valor de j: 3
    Os múltiplos de i ou j são : 0,2,3,4,6,8
*/