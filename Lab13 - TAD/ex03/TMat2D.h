
typedef struct TMat2D TMat2D; 

// Aloca memória e retorna um ponteiro para uma matriz 2D.
// return:
// -1 - on error
//  0 - on sucess
TMat2D *mat2D_create(int nrows, int ncolumns);

// Libera a memória alocada
// return:
// -1 - on error
//  0 - on sucess
int mat2D_free(TMat2D *mat);

int mat2D_set_value(TMat2D *mat, int i, int j, double val);

int mat2D_get_value(TMat2D *mat, int i, int j, double *val);

int mat2D_fill_with_random(TMat2D *mat, double minValue, double maxValue);

int mat2D_sum_two_matrixes(TMat2D *mat1, TMat2D *mat2, TMat2D *matResult);

int mat2D_multiply_two_matrixes(TMat2D *mat1, TMat2D *mat2, TMat2D *matResult);

int mat2D_multiply_mat_scalar(TMat2D *mat1, TMat2D *matResult, double scalar);

int mat2D_calculate_trace(TMat2D *mat1, double *result);

int mat2D_sum_lines(TMat2D *mat, double *vector);

int mat2D_get_number_of_rows(TMat2D *mat, int *result);

int mat2D_get_number_of_columns(TMat2D *mat, int *result);

int mat2D_print_matrix(TMat2D *mat);

int mat2d_increase_size(TMat2D *mat, int nrows, int ncols);