#include<stdio.h>
int main(){
    int a[100],b[100];
    int n1, n2, i, j;
    // Input size of first array
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    // Input the elements of first array
    printf("Enter the elements of first array:");
    for(i=0; i<n1; i++){
        scanf("%d",&a[i]);
    } 
    // Input size of second array
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    // Input the elements of second array
    printf("Enter the elemennts of second array:");
    for(i=0; i<n2; i++){
        scanf("%d", &b[i]);
    }
    // Common elements 
    printf("Common elements: ");
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            if(a[i] == b[j]){
                printf("%d", a[i]);
                break;
            }
        }
    }
return 0;
}