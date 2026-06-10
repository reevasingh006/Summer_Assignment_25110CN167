#include<stdio.h>
int main(){
    int arr[100],n,key,i,found=0;
    // input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    // Input elements to search 
    printf("Enter elements to search: ");
    scanf("%d",&key);
    // Linear seach
    for(i=0;i<n;i++){
        if(arr[i] == key){
            found = 1;
            printf("Elements found at position %d", i+1);
            break;
        }
    }
    if(found == 0){
        printf("Elements not found");
    }
    return 0;
}