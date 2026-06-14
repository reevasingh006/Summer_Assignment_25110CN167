#include<stdio.h>
int main(){
    int i,j,n,temp;
    // Input size of array
    printf("Enter size of elements:");
    scanf("%d", &n);
    int arr[n];
    // Input elements of array
    printf("Enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // sorting elements 
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // sorted array
    printf("Array in descending order:");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}