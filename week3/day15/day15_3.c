#include<stdio.h>
int main(){
    int n, i, last;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    // Input the elements 
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // rotation of array
    last = arr[n-1];
    for(i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
        arr[0] = last;
        // Rotated array
        printf("Rotated array: ");
        for(i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
    
    return 0;
}