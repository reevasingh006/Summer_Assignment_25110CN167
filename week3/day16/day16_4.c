#include<stdio.h>
int main(){
    int n,i,j,k;
    // Input the size of array
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    // Input the elements 
    printf("Enter the elements of array:");
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}
// Remove duplicates array
for(i=0; i<n; i++){
    for(j=i+1; j<n; ){
        if (arr[i] == arr[j]){
            // shift elements left
            for(k=j; k<n-1; k++){
                arr[k]=arr[k+1];
            }
            n--;
        }else{
            j++;
        }
    }
}
// Display array after removing duplicates
printf("Array after removing duplicates: \n");
for(i=0; i<n; i++){
    printf("%d ", arr[i]);
}
return 0;
}
