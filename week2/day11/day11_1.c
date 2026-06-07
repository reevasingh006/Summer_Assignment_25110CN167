#include<stdio.h>
// function to find sum
int sum(int a, int b ){
    return a + b;
}
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    // sum using function
    printf("sum= %d", sum(a,b));
    return 0;
}