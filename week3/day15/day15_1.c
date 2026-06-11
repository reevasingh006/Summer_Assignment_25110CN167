#include<stdio.h>
int main(){
    int n,i,temp;
    // Input size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    // Enter the elements of array
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    // Reverse array
    for(i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    // reversed array
    printf("Reversed array: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}