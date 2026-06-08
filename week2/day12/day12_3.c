#include<stdio.h>
// function to find fibonacci series
void fibonacci(int n){
    int a=0, b = 1, c, i;
    for(i=1; i<=n; i++){
        printf("%d ", a);
        c = a+b;
        a=b;
        b=c;
    }
}

int main(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    // print fibonacci series
    printf("fibonacci series are: ");
    fibonacci(n);
}