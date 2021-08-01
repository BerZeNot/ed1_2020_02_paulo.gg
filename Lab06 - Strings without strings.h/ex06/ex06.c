#include <stdio.h>

int main(){
    char nomeCompleto[50], nome[50], sobrenome[50], c;
    int pos=0, lastName=0, posInLastName=0;
    printf("<< Nomes >>\n");
    printf("Digite o primeiro nome e último nome: ");
    c = getchar();
    while(c!='\n'){
        nomeCompleto[pos] = c;
        pos++;
        c = getchar();
    }
    for(int i = 0; i < pos; i++){
        if(nomeCompleto[i] == ' ')
            lastName = 1;
        if(!lastName)
            nome[i] = nomeCompleto[i];
        else{
            sobrenome[posInLastName] = nomeCompleto[i];
            posInLastName++;
        }
    }
    sobrenome[posInLastName] = '\0';
    printf("Nome: %s\n", nome);
    printf("Sobrenome:%s\n", sobrenome);

    return 0;
}

/*
Faça um programa que recebe o nome e sobrenome de uma pessoa (máximo 40 caracteres), 
copie o nome para um vetor e o sobrenome para outro. Mostre os dois vetores copiados.

Exemplo de saída:
<< Nomes >>
Digite o primeiro nome e último nome: Carlos Silva
Nome: Carlos
Sobrenome: Silva
*/