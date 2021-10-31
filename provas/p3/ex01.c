/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente 
encadeada de alunos (a lista usada na prática 16 – copiar o código 
da SUA PRÁTICA)

Implemente no TAD a função  int list_erase_max_nota_n1(TDLinkedList *li), que 
retira da  lista todos os alunos que possuem a maior nota na primeira prova
(elemento n1 da struct aluno; note que mais de um aluno pode possuir 
a nota máxima). Pode-se utilizar qualquer função já implementada na
lista (que estão no .h)


*/

int list_erase_max_nota_n1(TDLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(li->size == 0)
            return ELEM_NOT_FOUND;
        else{
            int maxNote=0;
            DLNode *aux, *eraseNow;
            aux = li->begin;
            while(aux != NULL){
                if(aux->data.n1 > maxNote)
                    maxNote = aux->data.n1;
                aux = aux->next;
            }
            aux = li->begin;
            while(aux != NULL){
                if(aux->data.n1 == maxNote){
                    eraseNow = aux;
                    if(aux->prev == NULL && aux->next == NULL){
                        li->begin = NULL;
                        li->end = NULL;
                    }
                    else if(aux->prev == NULL){
                        li->begin = aux->next;
                        li->begin->prev = NULL;
                    }
                    else if(aux->next == NULL){
                        li->end = aux->prev;
                        li->end->next = NULL;
                    }// check:<<<erro: ainda falta uma opção quando o elemento está no meio da lista>>>>
                    free(eraseNow);
                    li->size--;
                }
                aux = aux->next;
            }
            return SUCCESS;
        }
    }
}