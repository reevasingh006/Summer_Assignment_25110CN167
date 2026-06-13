#include<stdio.h>
int main(){
    int a[100],b[100], unionarr[200];
    int n1, n2, i, j, k=0, found;
    // Input size of first array
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    // Input the elements of first array
    printf("Enter the elements of first array:");
    for(i=0; i<n1; i++){
    scanf("%d",&a[i]);
    unionarr[k++] = a[i];
}
// Input size of second array
printf("Enter the size of second array:");
scanf("%d",&n2);
// Input the elements of second array
printf("Enter the elements of second array:");
for(i=0; i<n2; i++){
scanf("%d",&b[i]);
}
// add unique elements from second array
for(i=0; i<n2; i++){
    found = 0;
    for(j=0; j<k; j++){
        if(b[i] == unionarr[j]){
            found = 1;
            break;
        }
    }
    if(found == 0){
        unionarr[k++] = b[i];
    }
}
// union array
printf("Union Array: ");
for(i=0; i<k; i++){
    printf("%d", unionarr[i]);
}
return 0;
}