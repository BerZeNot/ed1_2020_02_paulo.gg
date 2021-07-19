#include <stdio.h>

int main() {
    char nomeAluno;
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;
    printf("<< Calculo da Media >>\n");
    printf("Digite o nome do aluno: ");
    scanf("%c", &nomeAluno);
    printf("Digite a nota da prova 1: ", &nota1);
    scanf("%f", &nota1);
    printf("Digite a nota da prova 2: ", &nota2);
    scanf("%f", &nota2);
    printf("Digite a nota da prova 3: ", &nota3);
    scanf("%f", &nota3);
    printf("Digite o peso da prova 1: "); 
    scanf("%d", &peso1);
    printf("Digite o peso da prova 2: ");
    scanf("%d", &peso2);
    printf("Digite o peso da prova 3: ");
    scanf("%d", &peso3);
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);
    printf("A nota media do aluno %c. eh %.2f\n", nomeAluno, media);
}

/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: M
Digite a nota da prova 1: 70
Digite a nota da prova 2: 50
Digite a nota da prova 3: 65
Digite o peso da prova 1: 1
Digite o peso da prova 2: 2
Digite o peso da prova 3: 3
A nota media do aluno M. eh 60.83
-------------------------------------------------------------------------------
*/