typedef struct jogo jogo;

// Aloca espaço de memória para armazenar um jogo
// e retorna um ponteiro para uma struct jogo.
jogo *criaJogo(char *nome, char *fabricante, float preco, int idade_minima);

// Libera a memória alocada para armazenar o jogo.
int apagaJogo(jogo *jg);

// Mostra na tela as informações do jogo;
void getInfo(jogo *jg1);