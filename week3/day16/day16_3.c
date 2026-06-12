#include<stdio.h>
int main(){
    int n, i,j,sum;
    // Input size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    // input the elements of array
    printf("Enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    // Input the required sum
    printf("Enter required sum:");
    scanf("%d", &sum);
    printf("pairs are: \n");
    // check pairs 
    for(i=0; i<n; i++){
        for(j= i+1; j<n; j++){
            if(arr[i] + arr[j] == sum){
                printf("(%d,%d)\n", arr[i],arr[j]);
            }
        }
    }
    return 0;
}