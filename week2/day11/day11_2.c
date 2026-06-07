#include<stdio.h>
// function to find max
int max(int a, int b);
int main(){
    int a, b;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);
    printf("maximum = %d", max(a, b));
}
// maximun of two number
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
    return 0;
}
