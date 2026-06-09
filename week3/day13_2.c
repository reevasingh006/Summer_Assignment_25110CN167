#include<stdio.h>
int main(){
    int arr[100],n,i,sum=0;
    float avg;
    // Input Size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Input elements of array
    printf("Enter the elements of array: ");
    for(i=0; i<=n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    // calculate average
    avg = (float)sum/n;

    // display result
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);
    return 0;
}