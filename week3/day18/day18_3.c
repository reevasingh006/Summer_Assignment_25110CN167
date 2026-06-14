#include<stdio.h>
int main(){
    int n, i, key;
    // Input size of array
    printf("Enter size of elements:");
    scanf("%d", &n);
    int arr[n];
    // Input elements of array
    printf("Enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // Input elements to search
    printf("Enter the elements to search:");
    scanf("%d",&key);
    int low =0, high= n-1, mid;
    int found = 0;
    // binary search
    while(low<= high){
        mid = (low + high) / 2;

        if(arr[mid] == key){
            found = 1;
            break;
        }
        else if(arr[mid]< key){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    } 
    // result
    if (found){
        printf("Elements found at position %d", mid+1);
    }else{
        printf("Elements not found");
    }
return 0;
}