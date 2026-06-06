#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=5; i++){
        for(char ch = 'A'; ch < 'A' + i; ch++){
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}