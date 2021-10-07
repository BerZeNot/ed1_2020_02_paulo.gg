#ifndef _tlinkedlisth_
#define _tlinkedlisth_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

#include "aluno.h"

typedef struct TLinkedList TLinkedList;

TLinkedList* list_create();

int list_free(TLinkedList *li);

int list_push_back(TLinkedList *li, struct aluno al);

int list_pop_back(TLinkedList *li);

int list_get_back(TLinkedList *li, struct aluno *al);

int list_empty(TLinkedList *li);

int list_print(TLinkedList *li);

#endif