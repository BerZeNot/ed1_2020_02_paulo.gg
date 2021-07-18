#include <stdio.h>

int main() {
    int nota1, nota2, nota3, nota4, media;

    printf("<< Media Aritmetica >>\n");
    printf("Digite a 1a nota: ");
    scanf("%d", &nota1);

    printf("\nDigite a 2a nota: ");
    scanf("%d", &nota2);
    
    printf("\nDigite a 3a nota: ");
    scanf("%d", &nota3);
    
    printf("\nDigite a 4a nota: ");
    scanf("%d", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("\n===Notas===");
    printf("\nNota 1: %d; Nota 2: %d; Nota 3: %d; Nota 4: %d", nota1, nota2, nota3, nota4);
    printf("\nMedia: %d\n", media);
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Media Aritmetica >>
Digite a 1a nota: 30
Digite a 2a nota: 40
Digite a 3a nota: 60
Digite a 4a nota: 30
===Notas===
Nota 1: 30; Nota 2: 40; Nota 3: 60; Nota 4: 30
Media: 40
-------------------------------------------------------------------------------
*/