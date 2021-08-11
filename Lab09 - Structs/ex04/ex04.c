#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estruturas de dados
struct telefone{
    short ddd;
    long int numero;
};

struct data{
    short dia;
    char mes[12];
    int ano;
};

struct endereco{
    char rua[50];
    short numero;
    char complemento[15];
    char cidade[25];
    char estado[3];
    char cep[10];
};

struct cadastro{
    char nome[50];
    char cpf[15];
    char sexo[2];
    struct endereco endereco_comercial;
    char estado_civil[15];
    struct endereco endereco_residencial;
    float salario;
    struct telefone telefone;
    struct telefone telefone_residencial;
    char identidade[14];
    struct data data_nascimento;
    struct data data_ingresso;
};

// Métodos
int menu(){
    int opt;
    printf("<< Cadastro de Usuários >>\n");
    printf("1 - Listar todos os cadastros  \n");
    printf("2 - Cadastrar/Sobrescrever nova pessoa\n");
    printf("3 - Listar as pessoas que nasceram depois de 1990\n");
    printf("4 - Copiar dados de um cadastro para outro\n");
    printf("0 - Sair \n");
    printf("Escolha uma opção: ");
    scanf("%d", &opt);
    return opt;
}

void listaTodos(struct cadastro *pessoas){
    printf("Lista de usuários cadastrados:\n\n");
    for(int i=0; i<5; i++){
        printf("Posição: %d\n",i);
        printf("Informacoes Pessoais:\n");
        printf("Nome: %s, CPF: %s, Sexo: %s, Estado Civil: %s\n", pessoas[i].nome, pessoas[i].cpf, pessoas[i].sexo, pessoas[i].estado_civil);
        printf("Salario: R$ %.2f, Identidade: %s\n", pessoas[i].salario, pessoas[i].identidade);
        
        printf("Telefone residencial: (%d) %ld\n", pessoas[i].telefone.ddd, pessoas[i].telefone.numero);
        printf("Telefone residencial: (%d) %ld\n", pessoas[i].telefone_residencial.ddd, pessoas[i].telefone_residencial.numero);
        
        printf("Data de Nascimento: %d de %s de %d\n", pessoas[i].data_nascimento.dia, pessoas[i].data_nascimento.mes, pessoas[i].data_nascimento.ano);
        printf("Data de Ingresso: %d de %s de %d\n", pessoas[i].data_ingresso.dia, pessoas[i].data_ingresso.mes, pessoas[i].data_ingresso.ano);
        
        printf("\nEndereço comercial:\n");
        printf("Rua: %s, Nº: %d, Complemento: %s, Cidade: %s\n", pessoas[i].endereco_comercial.rua, pessoas[i].endereco_comercial.numero, pessoas[i].endereco_comercial.complemento, pessoas[i].endereco_comercial.cidade);
        printf("Estado: %s, CEP: %s \n", pessoas[i].endereco_comercial.estado, pessoas[i].endereco_comercial.cep);

        printf("\nEndereço residencial:\n");
        printf("Rua: %s, Nº: %d, Complemento: %s, Cidade: %s\n", pessoas[i].endereco_residencial.rua, pessoas[i].endereco_residencial.numero, pessoas[i].endereco_residencial.complemento, pessoas[i].endereco_residencial.cidade);
        printf("Estado: %s, CEP: %s \n", pessoas[i].endereco_residencial.estado, pessoas[i].endereco_residencial.cep);
        printf("\n");
    }
    printf("Digite uma tecla para prosseguir...");
    setbuf(stdin, NULL);
    getchar();
    printf("\n");
}

void cadastraNova(struct cadastro *pessoas){
    int pos;
    printf("<< Cadastrar nova pessoa >>\n");
    printf("Digite a posição no novo registro(entre 0 e 4): \n");
    scanf("%d", &pos);
    if(pos < 0 || pos > 4){
        printf("Posição inválida!\n");
        printf("Escolha uma posição entre 0 e 4.\n");
    } else {
        strcpy(pessoas[pos].nome, "Adamastor da Silva Novo");
        strcpy(pessoas[pos].cpf, "111.111.111-00");
        strcpy(pessoas[pos].sexo,"M");
        strcpy(pessoas[pos].endereco_comercial.rua, "Av. 1 Novo");
        pessoas[pos].endereco_comercial.numero = 111;
        strcpy(pessoas[pos].endereco_comercial.complemento, "Apt. 232");
        strcpy(pessoas[pos].endereco_comercial.cidade, "Amaratu Novo");
        strcpy(pessoas[pos].endereco_comercial.estado, "AM");
        strcpy(pessoas[pos].endereco_comercial.cep,"11111-000");
        strcpy(pessoas[pos].estado_civil, "Casado Nv");
        strcpy(pessoas[pos].endereco_residencial.rua, "Rua 1 Novo");
        pessoas[pos].endereco_residencial.numero = 11;
        strcpy(pessoas[pos].endereco_residencial.complemento, "Casa A Nv");
        strcpy(pessoas[pos].endereco_residencial.cidade, "Amaratu Novo");
        strcpy(pessoas[pos].endereco_residencial.estado, "AM");
        strcpy(pessoas[pos].endereco_residencial.cep,"11111-000");
        pessoas[pos].salario = 1100.45;
        pessoas[pos].telefone.ddd = 34;
        pessoas[pos].telefone.numero = 11111111111;
        pessoas[pos].telefone_residencial.ddd = 34;
        pessoas[pos].telefone_residencial.numero = 12121212121;
        strcpy(pessoas[pos].identidade, "AM-11.111.111");
        pessoas[pos].data_nascimento.dia = 1;
        strcpy(pessoas[pos].data_nascimento.mes, "janeiro");
        pessoas[pos].data_nascimento.ano = 1994;

        pessoas[pos].data_ingresso.dia = 1;
        strcpy(pessoas[pos].data_ingresso.mes, "janeiro");
        pessoas[pos].data_ingresso.ano = 2004;
        printf("Dados alterados com sucesso!\n");;
    }
    printf("Digite uma tecla para prosseguir...");
    setbuf(stdin, NULL);
    getchar();
    printf("\n");
}

void lista1990plus(struct cadastro *pessoas){
    printf("<< Nascidos depois de 1990 >>\n\n");
    for (int i = 0; i < 5; i++){
        if(pessoas[i].data_nascimento.ano > 1990){
            printf(" -> %s\n", pessoas[i].nome);
        }
    }
    printf("\nDigite uma tecla para prosseguir...");
    setbuf(stdin, NULL);
    getchar();
    printf("\n");
}

void copiaDeUmParaOutro(struct cadastro *pessoas){
    int origem, destino;
    printf("<< Copiar um registro para outra posição >>\n");
    printf("Digite a origem (entre 0 e 4): ");
    scanf("%d", &origem);
    printf("Digite o destino (entre 0 e 4): ");
    scanf("%d", &destino);
    if(origem > 4 || origem < 0){
        printf("Origem inválida!\n");
        printf("Use valores entre 0 e 4\n");
    } else if(destino > 4 || destino < 0){
        printf("Destino inválido!\n");
        printf("Use valores entre 0 e 4\n");
    } else {
        pessoas[destino] = pessoas[origem];
        printf("Copiado com sucesso para a posição pessoas[%d]", destino);
    }
    printf("\nDigite uma tecla para prosseguir...");
    setbuf(stdin, NULL);
    getchar();
    printf("\n");
}


// Função principal
int main(){
    // Pessoa 0
    struct cadastro pessoas[5];
    strcpy(pessoas[0].nome, "Adamastor da Silva");
    strcpy(pessoas[0].cpf, "111.111.111-00");
    strcpy(pessoas[0].sexo,"M");
    strcpy(pessoas[0].endereco_comercial.rua, "Av. 1");
    pessoas[0].endereco_comercial.numero = 111;
    strcpy(pessoas[0].endereco_comercial.complemento, "Apt. 232");
    strcpy(pessoas[0].endereco_comercial.cidade, "Amaratu");
    strcpy(pessoas[0].endereco_comercial.estado, "AM");
    strcpy(pessoas[0].endereco_comercial.cep,"11111-000");
    strcpy(pessoas[0].estado_civil, "Casado");
    strcpy(pessoas[0].endereco_residencial.rua, "Rua 1");
    pessoas[0].endereco_residencial.numero = 11;
    strcpy(pessoas[0].endereco_residencial.complemento, "Casa A");
    strcpy(pessoas[0].endereco_residencial.cidade, "Amaratu");
    strcpy(pessoas[0].endereco_residencial.estado, "AM");
    strcpy(pessoas[0].endereco_residencial.cep,"11111-000");
    pessoas[0].salario = 1100.45;
    pessoas[0].telefone.ddd = 34;
    pessoas[0].telefone.numero = 11111111111;
    pessoas[0].telefone_residencial.ddd = 34;
    pessoas[0].telefone_residencial.numero = 12121212121;
    strcpy(pessoas[0].identidade, "AM-11.111.111");
    pessoas[0].data_nascimento.dia = 1;
    strcpy(pessoas[0].data_nascimento.mes, "janeiro");
    pessoas[0].data_nascimento.ano = 1982;

    pessoas[0].data_ingresso.dia = 1;
    strcpy(pessoas[0].data_ingresso.mes, "janeiro");
    pessoas[0].data_ingresso.ano = 2004;

    // Pessoa 1
    strcpy(pessoas[1].nome, "Bernardo da Costa");
    strcpy(pessoas[1].cpf, "222.222.222-11");
    strcpy(pessoas[1].sexo,"M");
    strcpy(pessoas[1].endereco_comercial.rua, "Av. 2");
    pessoas[1].endereco_comercial.numero = 222;
    strcpy(pessoas[1].endereco_comercial.complemento, "Apt. 222");
    strcpy(pessoas[1].endereco_comercial.cidade, "Bmaratu");
    strcpy(pessoas[1].endereco_comercial.estado, "BM");
    strcpy(pessoas[1].endereco_comercial.cep,"22222-000");
    strcpy(pessoas[1].estado_civil, "Casado");
    strcpy(pessoas[1].endereco_residencial.rua, "Rua 2");
    pessoas[1].endereco_residencial.numero = 22;
    strcpy(pessoas[1].endereco_residencial.complemento, "Casa B");
    strcpy(pessoas[1].endereco_residencial.cidade, "Bmaratu");
    strcpy(pessoas[1].endereco_residencial.estado, "BM");
    strcpy(pessoas[1].endereco_residencial.cep,"22222-000");
    pessoas[1].salario = 1100.46;
    pessoas[1].telefone.ddd = 34;
    pessoas[1].telefone.numero = 21111111111;
    pessoas[1].telefone_residencial.ddd = 34;
    pessoas[1].telefone_residencial.numero = 22121212121;
    strcpy(pessoas[1].identidade, "AM-11.111.111");
    pessoas[1].data_nascimento.dia = 1;
    strcpy(pessoas[1].data_nascimento.mes, "fevereiro");
    pessoas[1].data_nascimento.ano = 1995;

    pessoas[1].data_ingresso.dia = 1;
    strcpy(pessoas[1].data_ingresso.mes, "fevereiro");
    pessoas[1].data_ingresso.ano = 2005;

    // Pessoa 2
    strcpy(pessoas[2].nome, "Clarisse de Oliveira");
    strcpy(pessoas[2].cpf, "222.222.222-11");
    strcpy(pessoas[2].sexo,"M");
    strcpy(pessoas[2].endereco_comercial.rua, "Av. 2");
    pessoas[2].endereco_comercial.numero = 222;
    strcpy(pessoas[2].endereco_comercial.complemento, "Apt. 222");
    strcpy(pessoas[2].endereco_comercial.cidade, "Bmaratu");
    strcpy(pessoas[2].endereco_comercial.estado, "BM");
    strcpy(pessoas[2].endereco_comercial.cep,"22222-000");
    strcpy(pessoas[2].estado_civil, "Casado");
    strcpy(pessoas[2].endereco_residencial.rua, "Rua 2");
    pessoas[2].endereco_residencial.numero = 22;
    strcpy(pessoas[2].endereco_residencial.complemento, "Casa B");
    strcpy(pessoas[2].endereco_residencial.cidade, "Bmaratu");
    strcpy(pessoas[2].endereco_residencial.estado, "BM");
    strcpy(pessoas[2].endereco_residencial.cep,"22222-000");
    pessoas[2].salario = 1100.46;
    pessoas[2].telefone.ddd = 34;
    pessoas[2].telefone.numero = 21111111111;
    pessoas[2].telefone_residencial.ddd = 34;
    pessoas[2].telefone_residencial.numero = 22121212121;
    strcpy(pessoas[2].identidade, "AM-11.111.111");
    pessoas[2].data_nascimento.dia = 1;
    strcpy(pessoas[2].data_nascimento.mes, "fevereiro");
    pessoas[2].data_nascimento.ano = 1995;

    pessoas[2].data_ingresso.dia = 1;
    strcpy(pessoas[2].data_ingresso.mes, "abril");
    pessoas[2].data_ingresso.ano = 2007;

    
    
    // Pessoa 3
    strcpy(pessoas[3].nome, "Demetrius de Ode");
    strcpy(pessoas[3].cpf, "222.222.222-11");
    strcpy(pessoas[3].sexo,"M");
    strcpy(pessoas[3].endereco_comercial.rua, "Av. 2");
    pessoas[3].endereco_comercial.numero = 222;
    strcpy(pessoas[3].endereco_comercial.complemento, "Apt. 222");
    strcpy(pessoas[3].endereco_comercial.cidade, "Bmaratu");
    strcpy(pessoas[3].endereco_comercial.estado, "BM");
    strcpy(pessoas[3].endereco_comercial.cep,"22222-000");
    strcpy(pessoas[3].estado_civil, "Casado");
    strcpy(pessoas[3].endereco_residencial.rua, "Rua 2");
    pessoas[3].endereco_residencial.numero = 22;
    strcpy(pessoas[3].endereco_residencial.complemento, "Casa B");
    strcpy(pessoas[3].endereco_residencial.cidade, "Bmaratu");
    strcpy(pessoas[3].endereco_residencial.estado, "BM");
    strcpy(pessoas[3].endereco_residencial.cep,"22222-000");
    pessoas[3].salario = 1100.46;
    pessoas[3].telefone.ddd = 34;
    pessoas[3].telefone.numero = 21111111111;
    pessoas[3].telefone_residencial.ddd = 34;
    pessoas[3].telefone_residencial.numero = 22121212121;
    strcpy(pessoas[3].identidade, "AM-11.111.111");
    pessoas[3].data_nascimento.dia = 1;
    strcpy(pessoas[3].data_nascimento.mes, "fevereiro");
    pessoas[3].data_nascimento.ano = 1995;

    pessoas[3].data_ingresso.dia = 1;
    strcpy(pessoas[3].data_ingresso.mes, "julho");
    pessoas[3].data_ingresso.ano = 2013;
    
    // Pessoa 4
    strcpy(pessoas[4].nome, "Ema Von Berg");
    strcpy(pessoas[4].cpf, "222.222.222-11");
    strcpy(pessoas[4].sexo,"M");
    strcpy(pessoas[4].endereco_comercial.rua, "Av. 2");
    pessoas[4].endereco_comercial.numero = 222;
    strcpy(pessoas[4].endereco_comercial.complemento, "Apt. 222");
    strcpy(pessoas[4].endereco_comercial.cidade, "Bmaratu");
    strcpy(pessoas[4].endereco_comercial.estado, "BM");
    strcpy(pessoas[4].endereco_comercial.cep,"22222-000");
    strcpy(pessoas[4].estado_civil, "Casado");
    strcpy(pessoas[4].endereco_residencial.rua, "Rua 2");
    pessoas[4].endereco_residencial.numero = 22;
    strcpy(pessoas[4].endereco_residencial.complemento, "Casa B");
    strcpy(pessoas[4].endereco_residencial.cidade, "Bmaratu");
    strcpy(pessoas[4].endereco_residencial.estado, "BM");
    strcpy(pessoas[4].endereco_residencial.cep,"22222-000");
    pessoas[4].salario = 1100.46;
    pessoas[4].telefone.ddd = 34;
    pessoas[4].telefone.numero = 21111111111;
    pessoas[4].telefone_residencial.ddd = 34;
    pessoas[4].telefone_residencial.numero = 22121212121;
    strcpy(pessoas[4].identidade, "AM-11.111.111");
    pessoas[4].data_nascimento.dia = 1;
    strcpy(pessoas[4].data_nascimento.mes, "fevereiro");
    pessoas[4].data_nascimento.ano = 1995;

    pessoas[4].data_ingresso.dia = 1;
    strcpy(pessoas[4].data_ingresso.mes, "setembro");
    pessoas[4].data_ingresso.ano = 2015;

    
    
    // menu
    while(1){

    
        int opt;
        opt = menu();
        switch (opt){
        case 0:
            exit(0);
            break;
        case 1:
            listaTodos(pessoas);
            break;
        case 2:
            cadastraNova(pessoas);
            break;
        case 3:
            lista1990plus(pessoas);
            break;
        case 4:
            copiaDeUmParaOutro(pessoas);
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    }
    return 0;
}

/*
1) 4.Define a estrutura necessária para armazenar os dados a seguir. 
Use as subestruturas dos   exercícios   anteriores para definir os tipos
dos campos com asterisco. Dê suporte para o cadastro de 5 pessoas:  

Cadastro
+------------+---------------------+--------------------------+------------------------+
| Nome       | Endereço comercial* |         Salário          |       Idade            | 
+------------+---------------------+--------------------------+--------+---------------+
| CPF        | Estado civil        |        Telefone**        | Data de nascimento *** |   
+------------+---------------------+--------------------------+--------+---------------+
| Sexo       |Endereço residencial*|  Telefone residencial ** | Data de ingresso ***   | 
+------------+---------------------+--------------------------+--------+---------------+

(a)Cadastre 5 usuários no seu código (não pedir para digitar – cadastre no próprio código
fonte, utilizando comandos de atribuição). A ideia disso é evitar digitação excessiva
durante o teste do programa.

(b)Crie um menu com as seguintes opções:
    a.Listar todos os cadastros
    b.Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela será cadastrada 0,1,2,3, ou 4)
    c.Listar as pessoas que nasceram depois de 1990.
    d.Copiar dados de um cadastro para outro


-------------------------------------------------------------------------------
Exemplo de saída:

=======Exemplo do menu=======

<< Cadastro de Usuários >> 

1 - Listar todos os cadastros  
2 - Cadastrar/Sobrescrever nova pessoa  
3 - Listar as pessoas que nasceram depois de 1990  
4 - Copiar dados de um cadastro para outro   
0 - Sair 
Escolha uma opção: 1

Lista de usuários cadastrados: 

Posição: 0 
Informacoes Pessoais: 
Nome: Cersei Lannister, CPF: 111111111-11, Sexo: F, Estado Civil: Viuva 
Salario: 111111, Identidade:  WE-11.111.111 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 1 
Informacoes Pessoais: 
Nome:  John Snow, CPF: 222222222-22, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-22.222.222 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 281 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Posição: 2 
Informacoes Pessoais: 
Nome: Jaime Lannister, CPF: 333333333-33, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-33.333.333 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 3 
Informacoes Pessoais: 
Nome: Samwell Tarly, CPF: 444444444-44, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-44.444.444 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 283 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

-------------------------------------------------------------------------------
*/