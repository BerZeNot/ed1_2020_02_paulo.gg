#include <stdio.h>

int main() {
    float salario, novo_salario;
    char percent = '%';
    printf("<< Aumento Salarial >>\n");
    printf("Digite o valor do salario R$: ");
    scanf("%f", &salario);
    
    // calculo do novo salário
    novo_salario = salario + (salario * 0.25);

    printf("Apos 25%c de aumento o salario fica em R$ %.2f\n",percent, novo_salario);
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Aumento Salarial >>
Digite o valor do salario R$: 4000
Apos 25% de aumento o salario fica em R$ 5000.00
-------------------------------------------------------------------------------
*/