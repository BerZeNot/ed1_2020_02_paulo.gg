#include <stdio.h>

int main(){
    char letra='g', chute;
    int cont = 5;
    printf("<< Forca de uma letra só >>\n");
    while(cont > 0){
        cont--;
        printf("Qual é a letra? ");
        scanf(" %c", &chute);
        if (chute == letra){
            printf("ACERTOU!\n");
            break;
        } else {
            if(cont > 0)
                printf("Errado! Você tem mais  %d chances!\n", cont);
            else
                printf("Acabaram suas chances. A letra correta é %c\n", letra);
        }
    }
    return 0;
}

/*
    Faça um programa que seja semelhante ao jogo de forca, mas com uma única letra. 
    A letra que o usuário deve adivinhar deve ser definida no código do programa. 
    O usuário tem 5 chances de acertar a letra. O programa finaliza sua execução 
    quando o usuário acerta a letra ou quando acabam suas chances

    Exemplo de saída:
    << Forca de uma letra só >>
    Qual a letra? o
    Errado! Você tem mais  4 chances

    Qual a letra? d
    Errado! Você tem mais  3 chances
    
    Qual a letra? w
    Errado! Você tem mais  2 chances    
    
    Qual a letra? q
    ACERTOU!
*/