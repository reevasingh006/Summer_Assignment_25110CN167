#include<stdio.h>
// function to check perfect number
int isperfect(int n)
{
    int sum = 0, i;

    for(i=1; i<n; i++){
        if (n % i == 0)
        sum += i;
    }
    return sum == n;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    // check perfect number
    if (isperfect(n)){
        printf("Perfect Number\n");
    }else{
        printf("Not a Perfect Number\n");
    }
    return 0;
}