#include<stdio.h>
int main(){
    int i,j;
    
    for(i=5; i>=1; i--){
        // print spaces
        for(j=1; j<=5-i; j++){
            printf(" ");
        }
        // print stars
        for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}