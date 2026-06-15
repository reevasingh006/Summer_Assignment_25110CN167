#include<stdio.h>
int main(){
    int a[10][10], b[10][10], sub[10][10];
    int rows, cols, i,j;
    // Input rows and cols of matrices
    printf("Enter the rows and columns of matrices:");
    scanf("%d %d", &rows, &cols);
    // Input elements of first matrices
    printf("Enter the elements of first matrices:");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // Input elements of second matrix
    printf("Enter the elements of second matrix:");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &b[i][j]);
        }
    }
    // Subtract matrices
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    // Print subtraction
    printf("Subtraction of marices: ");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d", sub[i][j]);
            printf("\n");
        }
    }
    return 0;
} 