#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alunos{
    char nome[50];
    char matricula[20];
    float nota1;
    float nota2;
    float nota3;
    float media;
    int faltas;
};

void cadastro(struct alunos *alunos){
    for (int i=0; i < 3; i++){
        printf("\nEntre com os dados do %dº aluno: \n",i+1);
        printf("Matricula: ");
        setbuf(stdin, NULL);
        gets(alunos[i].matricula);
        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(alunos[i].nome);
        printf("Nota da prova 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota da prova 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota da prova 3: ");
        scanf("%f", &alunos[i].nota3);
        printf("Numero de faltas: ");
        scanf("%d", &alunos[i].faltas);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    }
    
};

void maiorNotaProva1(struct alunos *alunos){
    float maiorNota;
    int pos;
    for(int i=0; i<3; i++){
        if(i==0){
            maiorNota = alunos[i].nota1;
            pos = i;
        } else if(alunos[i].nota1 > maiorNota) {
            maiorNota = alunos[i].nota1;
            pos = i;
        }
    }
    printf("\nAluno com maior nota na prova 1 foi %s com %.1f pontos.\n", alunos[pos].nome, alunos[pos].nota1);
};

void maiorMediaGeral(struct alunos *alunos){
    float maiorMedia;
    int pos;
    for(int i=0; i<3; i++){
        if(i==0){
            maiorMedia = alunos[i].media;
            pos = i;
        } else if(alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
            pos = i;
        }
    }
    printf("Aluno com maior media geral foi %s com %.1f pontos.\n", alunos[pos].nome, alunos[pos].media);
};

void menorMediaGeral(struct alunos *alunos){
    float menorMedia;
    int pos;
    for(int i=0; i<3; i++){
        if(i==0){
            menorMedia = alunos[i].media;
            pos = i;
        } else if(alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media;
            pos = i;
        }
    }
    printf("Aluno com menor media geral foi %s com %.1f pontos.\n", alunos[pos].nome, alunos[pos].media);
};

void sutuacaoAlunos(struct alunos *alunos){
    printf("\nSituação dos alunos:\n");
    for(int i=0; i<3; i++){
        float frequencia = 0;
        float totAulas = 72.0;
        frequencia = ((totAulas - alunos[i].faltas)*100.0)/totAulas;
        
        if(alunos[i].media >=60 && frequencia >= 75.0){
            printf("%d - %s. Aprovado.\n", i+1, alunos[i].nome);
        } else if(frequencia < 75.0){
            printf("%d - %s. Reprovado por falta.\n", i+1, alunos[i].nome);
        } else if(alunos[i].media < 60){
            printf("%d - %s. Reprovado por nota.\n", i+1, alunos[i].nome);
        }


    }
};

int main(){
    printf("<< Cadastro de alunos >>\n");
    struct alunos alunos[3];
    cadastro(alunos);
    maiorNotaProva1(alunos);
    maiorMediaGeral(alunos);
    menorMediaGeral(alunos);
    sutuacaoAlunos(alunos);
    return 0;
}

/*
5.Crie uma estrutura representando os alunos de um curso de graduação. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, 
nota da segunda prova, nota da terceira prova, média e número de faltas.

    (a) Permita ao usuário entrar com os dados de 3 alunos. 
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior média geral.
    (d) Encontre o aluno com menor média geral.
    (e) Mostre a situação final do aluno. Para ser aprovado o aluno precisa ter nota média final 
        maior ou igual a 60 e ter presença maior ou igual a 75% (considere um total de 72 aulas). 
        No caso de reprovação, mostrar o motivo da mesma, isto é, caso o aluno foi reprovado por 
        falta, mostrar “Reprovado por falta”. Caso tenha sido reprovado por nota, mostrar “Reprovado por nota”. 
        Se um aluno foi reprovado por falta e por nota, prevalece, como motivo para reprovação, as faltas. Assim,
        mostrar a mensagem “Reprovado por falta”. 


-------------------------------------------------------------------------------
Exemplo de saída:
Entre com os dados do 1º aluno: 
Matricula: 1
Nome: Paulo
Nota da prova 1: 50
Nota da prova 2: 70
Nota da prova 3: 60
Numero de faltas: 12

Entre com os dados do 2º aluno: 
Matricula: 2
Nome: Gustavo
Nota da prova 1: 95
Nota da prova 2: 90
Nota da prova 3: 100
Numero de faltas: 19

Entre com os dados do 3º aluno: 
Matricula: 3
Nome: Luis
Nota da prova 1: 50
Nota da prova 2: 60
Nota da prova 3: 58
Numero de faltas: 2

Aluno com maior nota na prova 1 foi Gustavo com 95,0 pontos.
Aluno com maior media geral foi Gustavo com 95,0 pontos.
Aluno com menor media geral foi Luis com 56,0 pontos.

Situacao dos Alunos: 
1- Paulo. Aprovado.
2- Gustavo. Reprovado por falta.
3- Luis. Reprovado por nota.
-------------------------------------------------------------------------------
*/