// symmetric matrix
#include<stdio.h>
int main(){
    int a[10][10], n, i, j, flag=1; 
    // Input the size of matrix
    printf("Enter the size of matrix:");
    scanf("%d",&n);
    // Input the elements of matrix
    printf("Enter the elements of matrix:");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // condition for symmetric
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i][j] != a[j][i]){
                flag = 0;
                break;
            }
        }   
    }
    if(flag){
        printf("Matrix is symmetric");
    }else{
        printf("Matrix is not symmetric");
    }
    return 0;
}