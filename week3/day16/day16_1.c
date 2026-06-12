#include<stdio.h>
int main(){
    int n,i,sum=0;
    // Input the size of array
    printf("Enter the size of array: ");
    scanf("%d",&n);
    // Input the elements of array
    int arr[n-1];
    printf("Enter the elements of array: ");
    for(i=0; i<n-1; i++){
    scanf("%d", &arr[i]);
    // sum of array
    sum += arr[i];
    }
    // calculate sum of first n natural number
    int total = n * (n + 1)/2;
    // missing number = Expected sum - Actual sum
    printf("Missing number is: %d\n", total - sum);
    return 0;
}