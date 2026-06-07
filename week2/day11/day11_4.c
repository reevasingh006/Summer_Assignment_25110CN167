#include<stdio.h>
// funnction to find factorial
int factorial(int n);
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    // display factorial
    printf("factorial = %d", factorial(n));
}
// find factorial
int factorial(int n){
    long long fact =1;
    int i;

    for(i =1; i<=n; i++){
        fact = fact * i; 
    }
    return fact;
}
