#include <stdio.h>

int main(){
    char nome1[50], nome2[50];
    char c;
    int igual=1, pos1=0, pos2=0;
    printf("Digite o nome 1: ");
    c = getchar();
    while(c!='\n'){
        nome1[pos1] = c;
        pos1++;
        c = getchar();
    }
    printf("Digite o nome 2: ");    
    c = getchar();
    while(c!='\n'){
        nome2[pos2] = c;
        pos2++;
        c = getchar();
    }

    
    if(pos1 != pos2){ // Se o tamanho dos nomes for diferente eles não serão iguais;
        printf("Os nomes digitados são diferentes\n");
        return;
    } else{
        for (int i = 0; i < pos1; i++){
            if(nome1[i]==nome2[i])
                continue;
            else{
                printf("Os nomes digitados são diferentes\n");
                return 0;
            }
        }
        printf("Os nomes digitados são iguais\n");
    }
    return 0;
}

/*
Faça um programa em que o usuário digita dois nomes, e o programa informa 
se os nomes são iguais. Não usar as funções de string.h 

Exemplo de saída:
<< Compara nomes>>
Digite o nome 1: Bruno
Digite o nome 2: Bruno
Os nomes digitados são iguais 

Exemplo de saída:
<< Compara nomes>>
Digite o nome 1: Bruno
Digite o nome 2: BrunO
Os nomes digitados são diferentes 
*/