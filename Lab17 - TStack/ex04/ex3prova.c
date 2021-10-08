#include <stdio.h>
#include <string.h>
#include "TStack.h"

int main(){
    int maxStringSize = 500;
    char str[maxStringSize];
    TStack *st;
    st = stack_create(maxStringSize);

    printf("Digite uma string: ");
    scanf("%s", str);
    
    int i = 0;
    while(str[i] != '\0'){
        stack_push(st, str[i]);
        i++;
    }
    i=0;
    char c;
    while(stack_empty(st) != 0){
        stack_top(st, &c);
        printf("%c",c);
        stack_pop(st);
    }
    printf("\n");
    return 0;
}