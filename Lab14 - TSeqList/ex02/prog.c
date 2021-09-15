#include <stdio.h>
#include <string.h>
#include "TVarSeqList.h"

int main(){
    printf("TAD Lista\n");
    Lista *l1 = criar_lista();
    struct aluno alns[3];
    strcpy(alns[0].nome, "Paulo Giovany");
    alns[0].matricula = 12011250;
    alns[0].n1 = 9.7;
    alns[0].n2 = 8.3;
    alns[0].n3 = 10.0;

    strcpy(alns[1].nome, "Geraldo");
    alns[1].matricula = 12211253;
    alns[1].n1 = 6.7;
    alns[1].n2 = 9.3;
    alns[1].n3 = 10.0;

    strcpy(alns[2].nome, "Adamastor");
    alns[2].matricula = 12211299;
    alns[2].n1 = 9.7;
    alns[2].n2 = 9.3;
    alns[2].n3 = 7.0;

    insere_lista_final(l1, alns[0]);
    insere_lista_final(l1, alns[1]);
    insere_lista_inicio(l1, alns[2]);
    imprime_lista(l1);

    /*printf("Tamanho da lista: %d\n", tamanho_lista(l1));
    printf("Lista cheia?: ");
    int res = lista_cheia(l1);
    if(res==0)
        printf("sim\n");
    else if(res==1)
        printf("Não\n");

    printf("Lista vazia?: ");
    res = lista_vazia(l1);
    if(res==0)
        printf("sim\n");
    else if(res==1)
        printf("Não\n");
    
    struct aluno al1;
    consulta_lista_pos(l1, 2, &al1);

    printf("Dados na posição 2 da lista: ");
    printf("Nome: %s\n", al1.nome);
    printf("Matrícula: %d\n", al1.matricula);
    printf("Nota 1: %.2f\n", al1.n1);
    printf("Nota 2: %.2f\n", al1.n2);
    printf("Nota 3: %.2f\n", al1.n3);

    struct aluno alnX;
    consulta_lista_mat(l1, 12211299, &alnX);
    printf("Aluno com matrícula: 12211299:\n");
    printf("Nome: %s\n", alnX.nome);
    printf("Matrícula: %d\n", alnX.matricula);
    printf("Nota 1: %.2f\n", alnX.n1);
    printf("Nota 2: %.2f\n", alnX.n2);
    printf("Nota 3: %.2f\n", alnX.n3);

    printf("\n<< Após a remoção do inicio >>\n");
    remove_lista_inicio(l1);
    imprime_lista(l1);
    
    printf("\n<< Após a remoção do fim >>\n");
    remove_lista_final(l1);
    imprime_lista(l1);

    printf("<< Removendo Paulo da lista >>\n");
    remove_lista(l1,12011250);
    imprime_lista(l1);
    libera_lista(l1);
    */


    struct aluno novoAluno;
    strcpy(novoAluno.nome, "Saulo Mcqueen");
    novoAluno.matricula = 12011249;
    novoAluno.n1 = 6.9;
    novoAluno.n2 = 9.8;
    novoAluno.n3 = 10;

    printf("\nInserindo orgenadamente:\n");
    insere_lista_ordenada(l1, novoAluno);
    imprime_lista(l1);


    printf("\nRemove otimizado:\n");
    remove_lista_otimizado(l1,12211253);
    imprime_lista(l1);
    

    return 0;
}