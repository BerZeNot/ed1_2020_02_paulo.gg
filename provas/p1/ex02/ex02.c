#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):

struct livros{
    char nome[50];
    float preco;
    int novo; // 0 - não novo | 1 - novo
    int ano;
};

// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)

// check:<<<erro: e2.5: a busca deve considerar somente os livros usados>>>>
// check:<<<erro: e2.5a: Inicialização errada (deveria ser o maior valor possível) ou o ano do primeiro livro mais antigo>>>>
// check:<<<erro: e2.6d: se todos os livros são novos o programa vai retornar errado>>>>

int buscar(struct livros *vetLivros, int tam){
    int maisAntigo;
    for (int i = 0; i < tam; i++){
// check:<<<erro: e2.6a: essa comparação deve estar fora do loop, uma vez que ela é excutada somente uma vez. Se tiver 1bilhão de elementos são praticamente 1bilhão de testes desencessários>>>>
        if(i==0){
            maisAntigo = i;
        } else {
            if(vetLivros[i].ano < vetLivros[maisAntigo].ano){
                maisAntigo = i;
            }
        }
    }
    return maisAntigo;
}

int main(){

   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa
   // principal

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)
    int tamanho = 3, indexDoMaisAntigo;
    struct livros *vetLivros;
    vetLivros = (struct livros *)malloc(tamanho*sizeof(struct livros));
    strcpy(vetLivros[0].nome,"Homo Deus");
    vetLivros[0].preco = 42.20;
    vetLivros[0].novo = 1;
    vetLivros[0].ano = 2016; 

    strcpy(vetLivros[1].nome,"Técnicas de Invasão");
    vetLivros[1].preco = 99.90;
    vetLivros[1].novo = 1;
    vetLivros[1].ano = 2019;

    strcpy(vetLivros[2].nome,"Repensando a Web com Rails");
    vetLivros[2].preco = 15.00;
    vetLivros[2].novo = 0;
    vetLivros[2].ano = 2006;

    indexDoMaisAntigo = buscar(vetLivros,tamanho);
    printf("Livro usado mais antigo: \n");
    printf("Nome: %s\n", vetLivros[indexDoMaisAntigo].nome);
    printf("Preço: %.2f\n", vetLivros[indexDoMaisAntigo].preco);
    printf("Novo: ");
    if(vetLivros[indexDoMaisAntigo].novo==1){
        printf("Sim\n");
    } else {
        printf("Não\n");
    }
    printf("Ano: %d\n", vetLivros[indexDoMaisAntigo].ano);
    free(vetLivros);
    return 0;
}