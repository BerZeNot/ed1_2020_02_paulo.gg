#include <stdio.h>
#include <math.h>

int main(){
    int valores[5], soma=0; 
    double media, dp, numerador=0;
    printf("<< Media e desvio-padrao >>\n");
    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    media = soma / 5.0;
    for(int i = 0; i < 5; i++){
        numerador += pow((valores[i] - media),2);
    }
    dp = sqrt(numerador / 5);

    printf("A media eh %.lf e o desvio-padrao eh %.2lf\n", media, dp);
    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80  
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
