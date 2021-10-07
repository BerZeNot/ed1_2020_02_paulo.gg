#ifndef _tstackh_
#define _tstackh_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define STACK_IS_EMPTY -3
#define STACK_IS_FULL -4


typedef struct TStack TStack;

TStack *stack_create(int size);

int stack_free(TStack *st);

int stack_push(TStack *st, char character);

int stack_pop(TStack *st);

int stack_top(TStack *st, char *character);

// Returns if stack is empty
// 0 - Is empty
// 1 - Is not empty
int stack_empty(TStack *st);

// Returns if stack is full
// 0 - Is full
// 1 - Is not full
int stack_full(TStack *st);

int stack_print(TStack *st);

#endif