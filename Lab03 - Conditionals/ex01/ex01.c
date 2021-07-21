#include <stdio.h>

int main(){
    char inicialNome;
    float nota1, nota2, nota3, media;
    printf("<<Calculo da Media>>\n");
    printf("Digite a inicial do nome do aluno: ");
    scanf(" %c", &inicialNome);
    printf("Digite a nota da prova 1: ");
    scanf(" %f", &nota1);
    printf("Digite a nota da prova 2: ");
    scanf(" %f", &nota2);
    printf("Digite a nota da prova 3: ");
    scanf(" %f", &nota3);
    media = (nota1*1 + nota2*1 + nota3*2) / 4;
    if(media>=60){
        printf("A nota média do aluno T. é %.0f => APROVADO!\n", media);
    } else {
        printf("A nota média do aluno T. é %.0f => REPROVADO!\n", media);
    }

    return 0;
}

/*
    1) Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
    A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. 
    Antes de o usuário entrar com as notas do aluno ele entre com a inicial 
    do nome do aluno (mais adiante aprenderemos como entrar com o nome completo 
    do aluno – por enquanto nesta lista vamos identificar o aluno somente com uma letra). 
    Ao final, mostrar o nome do aluno juntamente com a sua média e indicar se o 
    aluno foi aprovado ou reprovado.

    Exemplo de saída:

    << Cálculo da Média >>
    Digite a inicial do nome do aluno: T
    Digite a nota da prova 1: 40
    Digite a nota da prova 2: 40
    Digite a nota da prova 3: 80
    A nota média do aluno T. é 60 => APROVADO!
*/