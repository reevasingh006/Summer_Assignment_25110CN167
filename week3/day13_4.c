#include<stdio.h>
int main(){
    int arr[100],n,i;
    int even = 0, odd = 0;

    // Input the number of elements 
    printf("Enter the size of elements: ");
    scanf("%d", &n);
    // Input the elements of array
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // count even and odd elements
    for(i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    // Display the count of even and odd elements
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements are: %d\n", odd);
    return 0;
}