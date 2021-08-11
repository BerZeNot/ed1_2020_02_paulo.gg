#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[50];
    short numero;
    char complemento[15];
    char cidade[25];
    char estado[3];
    int cep;
};

int main(){
    printf("<< Cadastro de endereço >>\n");

    struct endereco ends[3];

    for(int i=0; i<3; i++){
        setbuf(stdin, NULL);
        printf("\nRua: ");
        gets(ends[i].rua);
        printf("Número: ");
        scanf("%d", &ends[i].numero);
        setbuf(stdin, NULL);
        printf("Complemento: ");
        gets(ends[i].complemento);
        printf("Cidade: ");
        gets(ends[i].cidade);
        printf("Estado: ");
        gets(ends[i].estado);
        printf("CEP: ");
        scanf("%d", &ends[i].cep);
    }
    printf("Enderecos cadastrados que são de \"MG\":\n");
    for(int i=0; i<3; i++){
        if(strcmp(ends[i].estado,"MG")==0){
            printf("%s, %d. %s. %s-%s, %d.\n", ends[i].rua, ends[i].numero, ends[i].complemento, ends[i].cidade, ends[i].estado, ends[i].cep);
        }
    }
    return 0;
}
    // Exemplo de saída:
    // Rua: Joao
    // Numero: 32
    // Complemento: casa A
    // Cidade: Uberlandia
    // Estado: MG
    // CEP: 38400034

/*
1) Crie uma estrutura chamada endereco, que armazena Rua, Número, Complemento,
Cidade, Estado e CEP (ilustração abaixo).  
Cadastre 3 endereços. Mostre ao final, todos os dados dos endereços cadastrados que são do estado “MG”

Endereco*
+------------+------------+---------------+
| Rua        | Número     |  Complemento  |    
+------------+------------+---------------+
| Cidade     | Estado     |     CEP       | 
+------------+------------+---------------+


-------------------------------------------------------------------------------
Exemplo de saída:
Rua: Joao
Numero: 32
Complemento: casa A
Cidade: Uberlandia
Estado: MG
CEP: 38400034


Rua: Almeida
Numero: 43
Complemento: Sem
Cidade: Araguari
Estado: MG
CEP: 38400045


Rua: Coronel Pedro
Numero: 25
Complemento: apto 40
Cidade: Caldas Novas
Estado: GO
CEP: 75780023


Enderecos cadastrados que sao de "MG":
Joao, 32. casa A. Uberlandia-MG, 38400034.
Almeida, 43. Sem. Araguari-MG, 38400045.
-------------------------------------------------------------------------------
*/