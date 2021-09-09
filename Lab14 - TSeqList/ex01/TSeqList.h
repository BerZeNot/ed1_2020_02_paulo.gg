
struct aluno {
    char nome[50];
    int matricula;
    float n1,n2,n3;
};

typedef struct lista Lista;

// Implementado
Lista* criar_lista();

// Implementado
int libera_lista(Lista *li);

// Implementado
int consulta_lista_pos(Lista *li, int pos, struct aluno *al);

// Implementado
int consulta_lista_mat(Lista *li, int mat, struct aluno *al);

// Implementado
int insere_lista_final(Lista *li, struct aluno al);

// Implementado
int insere_lista_inicio(Lista *li, struct aluno al);

// Implementado
int insere_lista_ordenada(Lista *li, struct aluno al);

// Implementado
int remove_lista(Lista *li, int mat);

// Implementado
int remove_lista_inicio(Lista *li);

// Implementado
int remove_lista_final(Lista *li);

// Implementado
int tamanho_lista(Lista *li);

// Implementado
int lista_cheia(Lista *li);

// Implementado
int lista_vazia(Lista *li);

// Implementado
void imprime_lista(Lista *li);

// Implementado
int remove_lista_otimizado(Lista *li, int mat);


