// column-wise sum 
#include<stdio.h>
int main(){
    int a[10][10], r, c, i, j, sum;
    // Input the size of matrix
    printf("Enter the row and column of matrix:");
    scanf("%d %d",&r,&c);
    // Input the elements of matrix
    printf("Enter the elements of matrix:");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Column wise sum
    for(j=0; j<r; j++){
        sum = 0; 

        for(i=0; i<c; i++){
            sum += a[i][j];
        }
            printf("Sum of column %d = %d\n",j+1, sum);
    }
    return 0;
}