#include<stdio.h>
int main(){
    int arr[100],i,n,largest,secondlargest;
    // Input size
    printf("Enter the size of array: ");
    scanf("%d", &n);
    // Input array
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    largest = secondlargest;
    // largest and second largest
    for(i=0;i<n;i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }else{ 
            (arr[i]> secondlargest && arr[i] != largest);
            secondlargest = arr[i];
        }
    }
    printf("Second largest elements = %d",secondlargest);
    return 0;
}