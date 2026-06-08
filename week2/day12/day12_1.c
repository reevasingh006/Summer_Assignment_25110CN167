#include<stdio.h>
// function to check palindrome
int ispalindrome(int n){
    int original =n, reverse = 0, rem;
    while(n!=0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    return original == reverse;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    // check palindrome
    if (ispalindrome(n)){
    printf("palindrome number\n");
    }else{
        printf("not a palindrome number\n");
    }
    return 0;
}