#ifndef _tseqlisth_
#define _tseqlisth_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

#include "aluno.h"

typedef struct lista TSeqList;

TSeqList* list_create();

int list_free(TSeqList *li);

int list_push_back(TSeqList *li, struct aluno al);

int list_pop_back(TSeqList *li);

int list_get_back(TSeqList *li, struct aluno *al);

int list_empty(TSeqList *li);

int list_full(TSeqList *li);

void list_print(TSeqList *li);

#endif