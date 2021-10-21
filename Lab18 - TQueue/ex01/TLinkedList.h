#include "aluno.h"

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

typedef struct TLinkedList TLinkedList;

// cria a lista - OK
TLinkedList* list_create();

// libera a lista OK
int list_free(TLinkedList *li);

// insere o aluno no início da lista OK
int list_push_front(TLinkedList *li, struct aluno al);

// insere o aluno no final da lista OK
int list_push_back(TLinkedList *li, struct aluno al);

// retorna o tamanho da lista (valores negativos em caso de erro) OK
int list_size(TLinkedList *li);

// retira da lista o primeiro aluno OK
int list_pop_front(TLinkedList *li);

// retira da lista o último aluno OK
int list_pop_back(TLinkedList *li);

// retornar o aluno que está no final da lista; OK
int list_front(TLinkedList *li, struct aluno *al);

// imprime a lista (única função que permite printf!) OK
int list_print(TLinkedList *li);
