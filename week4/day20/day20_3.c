// Row-wise sum of matrix
#include<stdio.h>
int main(){
    int a[10][10], r, c, i, j, sum;
    // Input the size of matrix
    printf("Enter the size of matrix:");
    scanf("%d %d", &r, &c);
    // Input the elements of matrix
    printf("Enter the elements of matrix:");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // Row wise sum of matrix
    for(i=0; i<r; i++){
        sum = 0;

        for(j=0; j<c; j++){
            sum += a[i][j];
        }
            printf("Sum of row %d = %d\n", i+1, sum);
    }
    return 0;
}