#include<stdio.h>
int main(){
    int a[10][10];
    int rows, cols, i, j;
    // Input rows and cols 
    printf("Enter the rows and columns: ");
    scanf("%d %d", &rows, &cols);
    // Input the elements of matrix
    printf("Enter the elements of matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // Transpose of matrix
    printf("Transpose of matrix:\n");
    // rows becomes columns
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", a[i][j]);
            printf("\n");
        }
    }
    return 0;
}