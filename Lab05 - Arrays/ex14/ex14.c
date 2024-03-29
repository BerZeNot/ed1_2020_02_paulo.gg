#include <stdio.h>

int main(){
    int qtdAlunos;
    printf("<< Universidade X >>\n");
    printf("Quantos alunos serão cadastrados: ");
    scanf("%d", &qtdAlunos);
    int matriculas[qtdAlunos];
    char classesSociais[qtdAlunos];
    float cra[qtdAlunos];
    for (int i = 0; i < qtdAlunos; i++){
        printf("\nEntre com o número do aluno: ");
        scanf("%d", &matriculas[i]);
        printf("Entre com a classe social do aluno %d: ", matriculas[i]);
        scanf(" %c", &classesSociais[i]);
        printf("Entre com o CRA do aluno %d: ", matriculas[i]);
        scanf("%f", &cra[i]);
    }

    printf("\n==== Alunos Cadastrados ====\n");

    for (int i = 0; i < qtdAlunos; i++){
        printf("Número: %d Classe Social: %c CRA: %.2f\n", matriculas[i], classesSociais[i], cra[i]);
    }
    
    return 0;
}

/*
Faça um programa que armazene informações sobre os alunos de uma universidade. 
O número máximo de alunos que o sistema pode cadastrar é 10000. Os dados a 
serem armazenados são: número de matrícula (inteiro); 
classe social (A, B, C, D ou E); CRA (real). Ao iniciar o programa, informe 
quantos usuários serão cadastrados. Depois de realizado o cadastro, mostre 
todos os dados lidos. A saída do programa deve ser como o exemplo abaixo.
* Proibido o uso de structs

Exemplo de saída:
<< Universidade X >>
Quantos alunos serão cadastrados: 2

Entre com o número do aluno: 5
Entre com a classe social do aluno 5: B
Entre com o CRA do aluno 5: 70

Entre com o número do aluno: 7
Entre com a classe social do aluno 7: B
Entre com o CRA do aluno 7: 60

==== Alunos Cadastrados ====
Número: 5 Classe Social: B CRA: 70.00
Número: 7 Classe Social: B CRA: 60.00
*/