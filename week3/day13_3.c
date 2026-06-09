#include<stdio.h>
int main(){
    int arr[100],n,i,largest,smallest;
    // Input size
    printf("enter the size of elements: ");
    scanf("%d", &n);
    // Input elements 
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // find largest and smallest
    largest = smallest = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] > largest){
        largest = arr[i];
        }
        if(arr[i] < smallest){
        smallest = arr[i];
        }
    }
    // Display largest and smallest array
    printf("Largest elements = %d\n", largest);
    printf("Smallest elements = %d\n", smallest);

    return 0;
}