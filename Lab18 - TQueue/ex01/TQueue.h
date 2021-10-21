#ifndef _tseqlisth_
#define _tseqlisth_

#include "aluno.h"

typedef struct TQueue TQueue;

TQueue *queue_create();

int queue_free(TQueue *queue);

int queue_enqueue(TQueue *queue, struct aluno al);

int queue_dequeue(TQueue *queue);

int queue_size(TQueue *queue);

int queue_first(TQueue *queue, struct aluno *al);

int queue_print(TQueue *queue);
#endif