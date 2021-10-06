#ifndef _tseqlisth_
#define _tseqlisth_
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