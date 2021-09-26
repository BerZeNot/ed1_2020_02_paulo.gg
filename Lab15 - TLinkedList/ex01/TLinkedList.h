#define SUCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

struct aluno {
    char nome[50];
    int matricula;
    float n1,n2,n3;
};

typedef struct TLinkedList TLinkedList;

// cria a lista - OK
TLinkedList* list_create();

// libera a lista OK
int list_free(TLinkedList *li);

// insere o aluno no início da lista OK
int list_push_front(TLinkedList *li, struct aluno al);

// insere o aluno no final da lista OK
int list_push_back(TLinkedList *li, struct aluno al);

// ordem por matrícula na função insere ordenado Quase OK 
int list_insert_sorted(TLinkedList *li, struct aluno al);

// retorna o tamanho da lista (valores negativos em caso de erro) OK
int list_size(TLinkedList *li);

// retira da lista o primeiro aluno OK
int list_pop_front(TLinkedList *li);

// retira da lista o último aluno OK
int list_pop_back(TLinkedList *li);

// retira da lista o aluno de matrícula 'mat' OK
int list_erase_data(TLinkedList *li, int mat);

// retira da lista o aluno da posição 'pos' (posição iniciada em 1) OK
int list_erase_pos(TLinkedList *li, int pos);

// encontrar o aluno pela posição na lista (posição inicia em 1) OK
int list_find_pos(TLinkedList *li, int pos, struct aluno *al);

// encontrar o aluno pelo número de matrícula OK
int list_find_mat(TLinkedList *li, int nmat, struct aluno *al);

// retornar o aluno que está no final da lista; OK
int list_back(TLinkedList *li, struct aluno *al);

// dado um número de matrícula, retornar a posição na lista OK
int list_get_pos(TLinkedList *li, int nmat, int *pos);

// imprime a lista (única função que permite printf!) OK
int list_print(TLinkedList *li);
