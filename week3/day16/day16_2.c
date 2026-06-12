#include<stdio.h>
int main(){
    int n,i,j;
    int maxfreq = 0, elements;
    // Input size of array
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    // Input the elements of array
    printf("Enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // Find frequency of elements
    for(i=0; i<n; i++){
        int count = 1;
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxfreq){
            maxfreq = count;
            elements = arr[i];
        }
    }
    printf("Elements with maximum frequency = %d\n", elements);
    printf("Frequency = %d", maxfreq);
    return 0;
}