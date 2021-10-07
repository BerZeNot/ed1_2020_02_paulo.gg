/*
 3) Considerando o TAD Matriz implementado em aula², crie uma nova 
função que permite aumentar o tamanho da matriz (mat2d_increase_size).
Os elementos da matriz original devem continuar na mesma posição que
estavam antes do aumento. Os novos elementos devem receber valor 0.
Por exemplo, caso o usuário tenha uma matriz 2x2 e queria que ela vire uma 
matriz 3x3, ele poderá usar a função de aumento de tamanho como
abaixo:

// criando matriz 2x2
mat = mat2D_create(2,2);

// Exemplo de preenchimento
// |2 7|
// |4 5|

// aumentando o tamanho da matriz para 3x3
mat2d_increase_size(mat,3,3)

// Exemplo após o aumento de tamanho
// |2 7 0|
// |4 5 0|
// |0 0 0|



²struct TMat2D
 {
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  double *data; // ponteiro para os dados da matriz
 };

*/
// check:<<<erro: e3.3: deve-se lembrar da representação linear da matriz na memória. Isso implica em reposicionar alguns elementos no vetor linear que estavam na matriz original>>>>
int mat2d_increase_size(TMat2D *mat, int nrows, int ncols){
    if(mat == NULL)
        return -1;
    if(nrows <= mat->nrows || ncols <= mat->ncolumns)
        return -1;

    double *dataTemp;
    dataTemp = malloc(nrows*ncols*sizeof(double));
    if(dataTemp==NULL)
        return -1;
    else{
        int pos;
        for(int i=0; i<nrows; i++){
            for(int j=0; j<ncols; j++){
                pos = j * mat->nrows + i;
                if(i < mat->nrows && j < mat->ncolumns){
                    dataTemp[pos] = mat->data[pos];// check:<<<erro: não pode usar o mesmo indexador para os dois vetores pois as matrizes originais possuem tamanho diferente>>>>
                }
                else{
                    dataTemp[pos] = 0;
                }
            }
        }
        mat->nrows = nrows; // refresh number of lines
        mat->ncolumns = ncols; // refresh number of columns
        free(mat->data); // free the memory alocated before
        mat->data = dataTemp; // set the new pointer
    }    
    return 0;
}