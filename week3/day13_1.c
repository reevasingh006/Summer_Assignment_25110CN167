#include<stdio.h>
int main()
{
    int arr[100],n,i;
    // input array
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements of array:  ");
    for(i= 0; i<=n; i++){
    scanf("%d", &arr[i]);
    }

    // display array
    printf("Array elements are: ");
    for(i=0; i<=n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}