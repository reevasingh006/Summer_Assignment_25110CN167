#include<stdio.h>
int main(){
    int n, i, j=0;
    // Input size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of array
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // move of all non - zero elements to the front
    for(i=0; i<n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
    // final array
    printf("Array after moving zeroes to the end: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}