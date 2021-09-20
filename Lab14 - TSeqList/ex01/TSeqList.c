#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TSeqList.h"

#define MAX 100

typedef struct lista{
    int qtd;
    struct aluno dados[MAX];
} Lista;

Lista* criar_lista(){
    Lista *list;
    list = (Lista *)malloc(MAX*sizeof(struct lista));
    if(list != NULL){
        list->qtd = 0;
        return list;
    }
}

int libera_lista(Lista *li){
    if(li!=NULL){
        free(li);
        return 0;
    } else {
        return -1;
    }
}

int consulta_lista_pos(Lista *li, int pos, struct aluno *al){
    if(li==NULL || pos <= 0 || pos > li->qtd)
        return -1;
    
    *al = li->dados[pos-1];
    return 0;
}

int consulta_lista_mat(Lista *li, int mat, struct aluno *al){
    if(li == NULL || al == NULL)
        return -1;

    for(int i=0; i<li->qtd;i++){
        if(li->dados[i].matricula == mat)
            *al = li->dados[i];
    }
    return 0;
}

int insere_lista_inicio(Lista *li, struct aluno al){
    if(li == NULL)
        return -1;
    
    if(li->qtd == MAX)
        return -1;

    for(int i=li->qtd-1; i>=0; i--)
        li->dados[i+1] = li->dados[i];

    li->dados[0] = al;
    li->qtd++;
    return 0;
}

int insere_lista_final(Lista *li, struct aluno al){
    if(li == NULL)
        return -1;
    
    if(li->qtd == MAX)
        return -1;

    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}

int insere_lista_ordenada(Lista *li, struct aluno al){
    if(li == NULL || li->qtd == MAX)
        return -1;
    
    int k, i=0;
    while(i<li->qtd && li->dados[i].matricula < al.matricula)
        i++;
    
    for(k=li->qtd-1; k>=i; k--)
        li->dados[k+1] = li->dados[k];

    li->dados[i] = al;
    li->qtd++;
    return 0;
}

int remove_lista(Lista *li, int mat){
    if(li==NULL || li->qtd==0)
        return -1;
    
    int posToRemove;
    for(int i=0; i<li->qtd; i++)
        if(li->dados[i].matricula == mat)
            posToRemove = i;

    for(int i=posToRemove; i<li->qtd; i++)
        li->dados[i] = li->dados[i+1];
    
    li->qtd--;
    return 0;
}

int remove_lista_inicio(Lista *li){
    if(li==NULL || li->qtd==0)
        return -1;
    for(int i = 1; i<li->qtd; i++)
        li->dados[i-1] = li->dados[i];

    li->qtd--;
    return 0;
}

int remove_lista_final(Lista *li){
    if(li==NULL || li->qtd==0)
        return -1;
    
    li->qtd--;
    return 0;
}

int tamanho_lista(Lista *li){
    if(li != NULL){
        return li->qtd;
    }
    return -1;
}

int lista_cheia(Lista *li){
    if(li != NULL){
        if(li->qtd == MAX)
            return 0;
        else
            return 1;
    }   
    return -1; 
}

int lista_vazia(Lista *li){
    if(li != NULL){
        if(li->qtd==0)
            return 0;
        else
            return 1;
    }
    return -1;
}

void imprime_lista(Lista *li){
    if(li != NULL){
        for(int i=0; i<li->qtd; i++){
            printf("Aluno %d:\n", i+1);
            printf("Nome: %s \n", li->dados[i].nome);
            printf("Matricula: %d\n", li->dados[i].matricula);
            printf("Nota 1: %.2f\n", li->dados[i].n1);
            printf("Nota 2: %.2f\n", li->dados[i].n2);
            printf("Nota 3: %.2f\n", li->dados[i].n3);
            printf("----------------------------------\n");
        }
    } else {
        printf("Lista vazia ou inválida!\n");
    }
}

int remove_lista_otimizado(Lista *li, int mat){
    if(li == NULL || li->qtd==0)
        return -1;
    
    int i = 0;

    while(i<li->qtd && li->dados[i].matricula != mat)
        i++;

    if(i == li->qtd) // Elemento não encontrado.
        return 0;
    
    li->qtd--;
    li->dados[i] = li->dados[li->qtd];
}