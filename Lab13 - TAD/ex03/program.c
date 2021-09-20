#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "TMat2D.h"

int main()
{
    int response, nrows=3, ncolumns=3;
    TMat2D *matriz, *mat2, *matResult;
    matriz = mat2D_create(nrows,ncolumns);
    mat2D_fill_with_random(matriz, 1, 2);
    /*
    // test if the value was insert into the matrix with sucess

    response = mat2D_set_value(matriz, 1,2,10);

    if(response == 0) 
        printf("Sucess to insert value!\n");
    else if(response == -1)
        printf("Error to insert value!\n");
    

    // print all the matrix values
    for(int i=0; i<nrows;i++){
        for(int j=0; j<ncolumns; j++){
            double value;
            mat2D_get_value(matriz,i,j,&value);
            printf("Value at position (%d,%d): %lf\n",i,j,value);
        }
    }

    // fill the matrix with random values and print it
    printf("\nAfter fill the matrix with random numbers:\n\n");
    mat2D_fill_with_random(matriz, 10,20);
    for(int i=0; i<nrows;i++){
        for(int j=0; j<ncolumns; j++){
            double value;
            mat2D_get_value(matriz,i,j,&value);
            printf("Value at position (%d,%d): %.2lf\n",i,j,value);
        }
    }
    
    // create the second matrix
    mat2 = mat2D_create(nrows, ncolumns);
    
    // fill it with random values between 1 and 3
    mat2D_fill_with_random(mat2, 1, 3);
    
    // allocate memory for the matrix matResult
    matResult = mat2D_create(nrows,ncolumns);
    
    // sum the matrixes "matriz" and "mat2" and put the result at "matResult"
    mat2D_sum_two_matrix(matriz, mat2, matResult);

    // print the matrixes "Matriz", "mat2" and "matResult"
    printf("Matriz 1:\n");
    mat2D_print_matrix(matriz);
    
    printf("Matriz 2:\n");
    mat2D_print_matrix(mat2);

    printf("Matriz 3:\n");
    mat2D_print_matrix(matResult);
    
    // multiplies the matrix "matriz" by a scalar value, put the result at 
    // a new matrix "matResult" and prints it;
    double scalar = 3.141592;
    matResult = mat2D_create(nrows,ncolumns);
    mat2D_multiply_mat_scalar(matriz, matResult, scalar);
    
    printf("Matrix 1:\n");
    mat2D_print_matrix(matriz);

    printf("Scalar: %lf\n",scalar);
    
    printf("Matrix resulting:\n");
    mat2D_print_matrix(matResult);

    */
    // calculates the trace of a matrix

    // prints the number of columns and rows of the matrix
    int nrws; 
    int ncls; 
    mat2D_get_number_of_rows(matriz, &nrws);
    mat2D_get_number_of_columns(matriz, &ncls);
    printf("About matrix: \n");
    printf("Number of Rows: %d\n", nrws);
    printf("Number of Columns: %d\n", ncls);


    // Using the function to calculate the trace of the matrix 
    // and printing the result
    
    mat2D_print_matrix(matriz);
    double trace;
    mat2D_calculate_trace(matriz, &trace);
    printf("Trace of the matrix: %lf\n", trace);

    // sums the lines of the matrix and put the result into a vector
    double vector[nrows];
    mat2D_sum_lines(matriz, vector);
    printf("Sum vector:\n");
    for(int i=0; i<nrows; i++)
        printf("[%lf]", vector[i]);
    printf("\n");
    return 0;
}
