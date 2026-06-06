#include<stdio.h>
int main()
{
    int n, temp, rev=0;
    printf("enter a number: ");
    scanf("%d", &n);
    temp =n;
    while (n>0){
        rev = rev+10 + n%10;
        n/=10;
    }
    if(temp == rev)
    printf("palindrome number");
    else 
    printf("not a palindrome number");
    return 0;
}