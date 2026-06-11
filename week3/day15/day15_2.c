#include<stdio.h>
int main(){
    int i, n, first;
    // Input the size of array
    printf("Ente the size of array: ");
    scanf("%d", &n);
    int arr[n];
    // Input the elements of array
    printf("Enter the elements of array; ");
    for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    // Rotation af array
    first = arr[0];
    for(i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
    // rotated array
    printf("Rotated array are: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
return 0;
}