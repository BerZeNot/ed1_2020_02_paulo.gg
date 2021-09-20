
struct aluno {
    char nome[50];
    int matricula;
    float n1,n2,n3;
};

typedef struct lista Lista;

// Inicializa uma lista de alunos
// Return: ponteiro para uma lista de alunos vazia.
Lista* criar_lista();

// Libera a memória alocada para uma lista
// Return: 
//  0 caso a liberação seja concluída.
// -1 caso o ponteiro passado como parâmetro seja nulo.
int libera_lista(Lista *li);

// Consulta o aluno de uma lista na posição informada insere ele em uma estrutura
// do tipo aluno passada como referência.
// Return: 
//  0 - Em caso de sucesso
// -1 - Em caso de erro.
int consulta_lista_pos(Lista *li, int pos, struct aluno *al);

// Consulta um aluno da lista com base na matrícula e insere
// os dados encontrados em uma estrutura do tipo aluno passada
// como referência.
// Return:
// -1 - em caso de erro 
//  0 - em caso de sucesso.
int consulta_lista_mat(Lista *li, int mat, struct aluno *al);

// Insere um aluno no final da lista.
// Return:
// -1 - em caso de erro 
//  0 - em caso de sucesso.
int insere_lista_final(Lista *li, struct aluno al);

// Insere um aluno no início da lista.
// -1 - em caso de erro 
//  0 - em caso de sucesso.
int insere_lista_inicio(Lista *li, struct aluno al);

// Insere um aluno da lista de forma ordenada de acordo com a matrícula.
// -1 - em caso de erro 
//  0 - em caso de sucesso.
int insere_lista_ordenada(Lista *li, struct aluno al);

// Remove um elento da lista de acordo com a matrícula mat passada
// como parâmetro.
// Return:
// -1 - em caso de erro 
//  0 - em caso de sucesso.
int remove_lista(Lista *li, int mat);

// Remove o primeiro aluno da lista.
// -1 - em caso de erro 
//  0 - em caso de sucesso.
int remove_lista_inicio(Lista *li);

// Remove o último aluno da lista.
// Return:
// -1 - em caso de erro 
//  0 - em caso de sucesso.
int remove_lista_final(Lista *li);

// Retorna a quantidade de alunos contidos na lista.
// Return:
// -1 - em caso de erro
// inteiro com tamanho da lista em caso de sucesso.
int tamanho_lista(Lista *li);

// Retorna se a lista está cheia
// Return:
//    0 - se a lista estiver cheia
//    1 - se a lista não estiver cheia
//   -1 - se houver algum erro
int lista_cheia(Lista *li);

// Retorna se a lista está vazia
// Return:
//    0 - se a lista estiver vazia
//    1 - se a lista não estiver vazia
//   -1 - se houver algum erro
int lista_vazia(Lista *li);

// Imprime uma lista
// No return
void imprime_lista(Lista *li);

// Remove um aluno da lista a partir da matrícula de forma mais eficiente.
// Return: 
//  0 - Em caso de sucesso
// -1 - Em caso de erro.
int remove_lista_otimizado(Lista *li, int mat);