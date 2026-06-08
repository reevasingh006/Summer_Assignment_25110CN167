#include<stdio.h>
// function to check armstrong number
int isarmstrong(int n){
    int original = n, sum = 0, rem;
    while(n!=0){
        rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }
    return original == sum;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    // check armstrong
    if (isarmstrong(n)){
        printf("Armstrong number");
    } else{
        printf("Not a Armstrong number");
    }
    return 0;
}