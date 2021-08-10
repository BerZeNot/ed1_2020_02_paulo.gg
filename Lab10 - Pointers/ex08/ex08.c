#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int inteiro;
    double decimal;
    void *pointer;
    printf("Digite um valor inteiro: ");
    pointer = &inteiro;
    scanf("%d", pointer);

    printf("Digite um valor decimal: ");
    pointer = &decimal;
    scanf("%lf", pointer);

    pointer = &inteiro;
    printf("\nInteiro digitado: %d\n", *(int *)pointer);
    pointer = &decimal;
    printf("Decimal digitado: %lf\n", *(double *)pointer);
    return 0;
}