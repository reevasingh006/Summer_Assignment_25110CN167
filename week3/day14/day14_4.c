#include<stdio.h>
int main(){
int arr[100],n,i,j;
// Input size
printf("Enter the size of elements: ");
scanf("%d", &n);
// Input array
printf("Enter the elements: ");
for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}
printf("Duplicate elements are: ");
for(i=0; i<n;i++){
    for(j=0; j<n; j++){
        if (arr[i]== arr[j]){
            printf("%d ",arr[i]);
            break;
        }
    }
}
return 0;
}