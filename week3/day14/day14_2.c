#include<stdio.h>
int main(){
    int arr[100],n,i,key,count=0;
    // Input Size
    printf("Enter the size of array:");
    scanf("%d", &n);
    // Input array 
    printf("Enter the elements of array: ");
    for(i=0; i<n;i++){
    scanf("%d", &arr[i]);
    }
    // Input elements to find frequency
    printf("Enter elements to find frequency: ");
    scanf("%d", &key);
    // count frequency
    for(i=0;i<n;i++){
        if (arr[i]==key){
            count++;
        }
    }
    printf("Frequency of %d = %d", key, count);
    return 0;
}