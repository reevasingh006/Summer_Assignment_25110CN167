#include<stdio.h>

int Sumdigits(int n)
{
    if(n == 0)
    return 0;

    return (n % 10) + Sumdigits(n/10);
}

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    
    printf("sum of digits: %d", Sumdigits(n));

    return 0;
}