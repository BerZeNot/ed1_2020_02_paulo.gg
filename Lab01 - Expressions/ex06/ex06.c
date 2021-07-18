#include <stdio.h>

int main() {
    float premio = 780000, ganhador1, ganhador2, ganhador3;
    printf("<< Loteria >>\n");
    ganhador1 = premio * 0.46;
    ganhador2 = premio * 0.32;
    ganhador3 = premio - (ganhador1 + ganhador2);
    printf("Valor total do premio: %.0f\n", premio);
    printf("Primeiro vencedor: %.0f\n", ganhador1);
    printf("Segundo vencedor: %.0f\n", ganhador2);
    printf("Terceiro vencedor: %.0f\n", ganhador3);
}

/*
=> A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que da quantia total: 
    O primeiro ganhador receberá 46%;
    O segundo receberá 32%;
    O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Loteria >>
Valor total do premio: 780000
Primeiro vencedor: 358800
Segundo vencedor: 249600
Terceiro vencedor: 171600
-------------------------------------------------------------------------------
*/