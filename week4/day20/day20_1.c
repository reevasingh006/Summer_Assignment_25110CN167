// multiplication of matrix
#include<stdio.h>
int main(){
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;
    // Input size of matrix
    printf("Enter the row and column of first matrix:");
    scanf("%d %d", &r1, &c1);
    printf("Enter the row and column of second matrix:");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2){
        printf("Matrix multiplication is not possible");
        return 0;
    }
    // Input the elements of matrix 
    printf("Enter the elements of first matrix:");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            result[i][j] = 0;
            for(k=0; k<c1; k++){
                result[i][j] += a[i][k] * b[k][j];
            } 
        }
    }
    // Multiplication of matrix
    printf("Multiplication of matrix:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d ", result[i][j]);
            printf("\n");
        }
    }
    return 0;
}