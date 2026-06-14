#include<stdio.h>
int main(){
    int n, i, j, temp, minIndex;
    // Input size of array
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    // Input elements of array
    printf("Enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
        // selection sort
        for(i=0; i<n-1; i++){
            minIndex = i;
            // find smallest elements in array
            for(j=i+1; j<n; j++){
                if (arr[j]< arr[minIndex]){
                    minIndex = j;
                }
            }
            // swapping
            temp = arr[i]; 
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        // sorted array
        printf("Sorted array:");
        for(i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        return 0;
    }  

