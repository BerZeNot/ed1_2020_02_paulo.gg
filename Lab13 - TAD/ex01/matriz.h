// here comes the headers

typedef struct matriz{
    int pos[12];
} matriz;

// Cria a matriz;
int *criarMatriz();

// Exclui a matriz;
int excluirMatriz(matriz *matrz);

// Acessa o elemento da posição i j;
int acessarElemento(matriz *matrz, int i, int j);

// Preenche a matriz com números aleatórios pertencentes a um
// intervalo informado;
int preencheRandom(matriz *matrz, int min, int max);

// Soma duas matrizes e coloca o resultado em uma terceira matriz;
int somaMatrizes(matriz *matrz1, matriz *matrz2, matriz *matrzResult);

// Multiplica duas matrizes e coloca o resultado em uma terceira matriz;
int multiplicaMatrizes(matriz *matrz1, matriz *matrz2, matriz *matrzResult);

// Multiplica uma matriz por um valor escalar. O resultado é inserido na matriz
// passada por referência;
int multiplicaMatrzEsclr(matriz *matrz, int escalar);

// Calcula o trabalho de uma matriz matrz e escreve o valor em uma variável passara por 
// referência, T;
int calculaTraco(matriz *matrz, int *T);

// Retornar um vetor com a soma das linhas
int *somaLinhas(matriz *matrz);

// Retornar um vetor com a soma das colunas
int *somaColunas(matriz *matrz);

int numeroDeLinhas()
