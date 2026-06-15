#include<stdio.h>
int main(){
    int a[10][10], b[10][10], sum[10][10];
    int rows, columns, i,j;
    // Input rows and columns of matrix
    printf("Enter the rows and columns of matrices:");
    scanf("%d %d", &rows, &columns);
    // Input elements of first matrices
    printf("Enter the elements of first matrix: \n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            scanf("%d", &a[i][j]);
        }
    }
// Input elements of second matrix
printf("Enter the elements of second matrix: \n");
for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        scanf("%d", &b[i][j]);
    }
}
// Add matrices
for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        sum[i][j] = a[i][j] + b[i][j];
    }
}
// Print addition
printf("Sum of matrices: ");
for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        printf("%d", sum[i][j]);
        printf("\n");
    }
}
return 0;
}