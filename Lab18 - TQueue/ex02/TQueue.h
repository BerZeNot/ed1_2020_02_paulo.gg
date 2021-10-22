#ifndef _tseqlisth_
#define _tseqlisth_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define QUEUE_IS_EMPTY -3

#include "aluno.h"

typedef struct TQueue TQueue;

TQueue *queue_create();

int queue_free(TQueue *queue);

int queue_enqueue(TQueue *queue, struct aluno al);

int queue_dequeue(TQueue *queue);

int queue_size(TQueue *queue);

int queue_get_first(TQueue *queue, struct aluno *al);

int queue_print(TQueue *queue);
#endif