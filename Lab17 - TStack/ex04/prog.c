#include <stdio.h>
#include <string.h>
#include "TStack.h"

int main(){
    int stack_max = 100;
    TStack *st;
    st = stack_create(stack_max);
    if(st == NULL){
        printf("Error to alocate stack\n");
        return 0;
    }
    
    char sequence[stack_max];
    printf("Inform the sequence: ");
    scanf("%s", sequence);
    // strcpy(sequence, "([()()])");
    
    int i=0;
    char aux;
    while(sequence[i] != '\0'){
        if(sequence[i] == '(' || sequence[i] == '[')
            stack_push(st, sequence[i]);        
        
        else if(sequence[i] == ')'){
            stack_top(st, &aux);
            if(aux == '(')
                stack_pop(st);
        } 
        
        else if(sequence[i] == ']'){
            stack_top(st, &aux);
                if(aux == '[')
                    stack_pop(st);
        }
        i++;
    }
    if(stack_empty(st) == 0)
        printf("The sequence is good formed!\n");
    else
        printf("The sequence is not good formed!\n");

    return 0;
}