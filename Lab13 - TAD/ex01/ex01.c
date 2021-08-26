#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
    matriz m1;
    m1.pos[0] = 2;
    printf("%d\n",m1.pos[0]);
    printf("Hello, ");
    imprimeNome();
    return 0;
}
