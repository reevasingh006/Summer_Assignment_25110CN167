#include<stdio.h>
int main(){
    int a[100], b[100], merged[200];
    int n1, n2, i;
    // Input size of  first array
    printf("Enter the size of array: ");
    scanf("%d", &n1);
    // Input elements of first array
    printf("Enter elements of first array:\n");
    for(i=0; i<n1; i++){
    scanf("%d",&a[i]);
    }
    // Input size of second array
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    // Input elements of second array 
    printf("Enter elements of second array:");
    for(i=0; i<n2; i++){
        scanf("%d",&b[i]);
    }
    // copy first array
    for(i=0; i<n1; i++){
        merged[i]= a[i];
    }
    // copy second array
    for(i=0; i<n2; i++){
        merged[n1 + i]= b[i];
    }
    // merged array
    printf("Merged array: ");
    for(i=0; i<n1+n2; i++){
        printf("%d", merged[i]);
    }
    return 0;
}