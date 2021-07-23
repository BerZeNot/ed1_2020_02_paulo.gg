#include <stdio.h>
#include <math.h>

int main(){
    int qtdBits, bitAtual, numBinario=0, numDecimal=0, cont=1;
    printf("<< Conversor binário-decimal >>\n");
    printf("Entre com o número de bits: ");
    scanf("%d", &qtdBits);
    for(int i=qtdBits-1; i>=0; i--){
        printf("Digite o bit # %d: ", cont);
        scanf("%d", &bitAtual);
        // Junta os bits do binário
        numBinario += bitAtual*(pow(10,i));

        // Converte o binário para decimal
        numDecimal += bitAtual*(pow(2,i));
        cont++;
    }
    printf("O número binário %d em decimal é %d\n", numBinario, numDecimal);
    return 0;
}

/*
    Faça um conversor binário – decimal. O usuário deve digitar o número 
    de bits do número binário e um bit deve ser lido por vez

    Exemplo de saída:
    << Conversor binário-decimal >>
    Entre com o número de bits: 3
    Digite o bit # 1: 1
    Digite o bit # 2: 0
    Digite o bit # 3: 0
    O número binário 100 em decimal é 4
    *dica para juntar os bits para mostrar na tela: 101 = 1*(10^2) + 0*(10^1) + 1*(10^0)
*/