#include<stdio.h>
int main(){
    int i,j;
    // loop for rows
    for(i=1; i<=5; i++){
        // print increasing numbers
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        // print decreasing numbers
        for(j=i-1; j>=1; j--){
            printf("%d",j);
        }
        printf("\n");
    }
}