#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0){
        sum=sum+n%10;
        n/=10;
    }
    printf("sum of digits =%d", sum);
    return 0;
}