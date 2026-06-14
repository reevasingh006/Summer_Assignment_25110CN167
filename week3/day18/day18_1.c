#include<stdio.h>
int main(){
    int n,i,j,temp;
    // Input size of array
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    // Input array elements
    printf("Enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    // bubble sort
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            // swapping if current elements is greater than next elements
            if(arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // sorted array
    printf("Sorted aray:");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}