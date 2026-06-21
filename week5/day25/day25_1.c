// merge two sorted array
#include<stdio.h>
#include<string.h>
int main(){
    int n1, n2, i, j, k=0;
    // Input sorted array
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int a[n1], b[n2], c[n1+n2];
    // Input elements of sorted array
    printf("Enter elements of first sorted array: ");
    for(i=0; i<n1; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second sorted array: ");
    for(j=0; j<n2; j++){
        scanf("%d", &b[j]);
    }
    i=0; 
    j=0;
    // Merge both array
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            c[k] = a[i];
            k++;
            i++;
        }else{
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        c[k++] = a[i++];
    }
    while(j<n2){
        c[k++] = b[j++];
    }
    printf("Meged sorted array: ");
    for(i=0; i<k; i++){
        printf("%d", c[i]);
    }
    return 0;
}
