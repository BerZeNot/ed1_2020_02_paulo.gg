#include <stdio.h>
#include <stdlib.h>

int calculaFatorial(int numero){
    int numFatorial=numero;
    if(numero==0){
        return 1;
    }
    for(int i=numero-1; i > 0; i-- ){
        numFatorial = numFatorial*i;
    }
    return numFatorial;
}

double neperiano(int *n){
    double neper=1.0;
    for(int i=1; i<=*n; i++){
        neper = neper + (1.0/calculaFatorial(*n));
    }

    return neper;
}

int main(){
    int n;
    printf("Digite o valor de n para aproximar o numero neperiano: ");
    scanf("%d", &n);
    printf("O valor do numero neperiano eh: %lf\n", neperiano(&n));
    return 0;
}

/*
=> Faça uma função para calcular o número neperiano usando uma série (ver na wikipedia). 
A função deve ter como parâmetro o número de termos que serão somados (note que, 
 quanto maior o número, a resposta estará mais próxima do valor e). 
Observe que é preciso calcular o fatorial de vários números – para isso, utilize
a função criada anteriormente. Utilize também o procedimento criado no exercício 2.

Pesquise: https://pt.wikipedia.org/wiki/E_(constante_matemática)



Ex: Neperiano(0) tem como saída 1; 
    Neperiano(1) tem como saída 2;
    Neperiano(5) tem como saída 2.71666666666667;

No programa principal, solicite ao usuário o valor para aproximar
o número neperiano.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de n para aproximar o numero neperiano: 14
O valor do numero neperiano eh: 2.71828182845823
-------------------------------------------------------------------------------
*/