#include <stdio.h>
int main(){
    long long n; 
    int i, largest = -1;

    printf("enter a number: ");
    scanf("%lld", &n);

    for (i=2; i<=n; i++){
        while(n%i == 0){
            largest = i;
            n /= i;
        }
    }
    printf(" largest prime factor = %d", largest);
    return 0;
}
