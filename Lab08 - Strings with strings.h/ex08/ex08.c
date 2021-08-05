#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char nome[50], CPF[15], RG[13], endereco[70], cidade[20], estado[3],CEP[10];
    printf("<< Declarador >>\n");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu CPF: ");
    gets(CPF);
    printf("Digite seu RG: ");
    gets(RG);
    printf("Digite seu endereço: ");
    gets(endereco);
    printf("Digite a cidade: ");
    gets(cidade);
    printf("Digite o estado: ");
    gets(estado);
    printf("Digite o CEP: ");
    gets(CEP);
    printf("\n\t\tD E C L A R A Ç Ã O\n\n");

    printf("Eu, %s, RG %s, CPF ", nome, RG);
    printf("%s,\n", CPF);
    printf("residente a %s, %s-%s,\n", endereco, cidade, estado);
    printf("CEP %s venho por meio desta declararque vou estudar para a prova\n", CEP);
    return 0;
}

/*
Faça um programa em que a pessoa entra com o seu nome, CPF, RG, endereço, 
CEP, Cidade, Estado e o programa crie, automaticamente, uma carta de declaração 
(veja o modelo abaixo)
Exemplo de saída:

Digite seu nome: Maria de Lurdes
Digite seu CPF: 356.874.875-98 
Digite seu RG: 24.565.789-5 
Digite seu endereço: Rua Major José, 45
Digite a cidade: Uberlândia
Digite o estado: MG 
Digite o CEP: 38400-890

D  E  C  L  A  R  A  Ç  Ã  O 

Eu, Maria de Lurdes, RG 24.565.789-5, CPF 356.874.875-98, 
residente a Rua Major José, 45, Uberlândia-MG,
CEP 38400-890 venho por meio desta declararque vou estudar para a prova
*/