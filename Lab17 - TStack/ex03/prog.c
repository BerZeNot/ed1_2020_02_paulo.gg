#include <stdio.h>
#include "TStack.h"

int main(){
    TStack *st;
    int result;
    st = stack_create(3);
    result = stack_push(st, 'a');
    if(result == 0)
        printf("Push success\n");
    
    result = stack_push(st, 'b');
    printf("Second Push code: %d\n", result);

    
    // result = stack_pop(st);
    // if(result == 0)
    //     printf("Pop success\n");
    // printf("Return of pop: %d\n", result);

    result = stack_push(st, 'c');
    if(result == 0)
        printf("Deu certo apesar da pilha estar cheia\n");
    if(result == -4)
        printf("Erro! Pilha cheia!\n");
    
    char st_top;
    result = stack_top(st, &st_top);
    if(result == 0){
        printf("Stack_top success!\n");
        printf("We got it. TOP: %c\n", st_top);
    } else
        printf("Error! Code: %d\n", result);

    result = stack_empty(st);
    if(result < 0){
        printf("Error! CODE: %d\n", result);
    } else {
        result == 0 ? printf("The stack is empty\n") 
                    : printf("The stack is not epty\n");
    }

    result = stack_full(st);
    if(result < 0){
        printf("Error! CODE: %d\n", result);
    } else {
        result == 0 ? printf("The stack is full\n")
                    : printf("The stack is not full\n");
    }

    result = stack_print(st);

    return 0;
}