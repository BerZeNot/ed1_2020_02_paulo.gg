#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    printf("Resposta comentada no código fonte.\n");
    return 0;
}
/*
O comportamento da soma e da subtração de valores em ponteiros varia de 
acordo com o tipo do ponteiro, pois eles possuem tamanhos diferentes.
Em aritmética de ponteiros, quando soma-se ou subtrai-se 1 unidade de um
ponteiro, o que acontece é a adição ou subtração 1 unidade equivalente ao tamanho
do tipo de dados do ponteiro em bytes. Ou seja, se for somado + 1 em um ponteiro
para inteiro, cujo endereço para o qual ele aponta é 120, por exemplo, o novo endereço
para o qual ele apontará é 124 (pois o tipo int tem tamanho 4 bytes). Caso fose um ponteiro 
para double, o valor seria 120+8, já que o um double ocupa 8 bytes na memóŕia. E a mesma 
lógica se aplica ao tipo ponteiro para char (que ocupa 1 byte). 120+1 = 121. 
*/