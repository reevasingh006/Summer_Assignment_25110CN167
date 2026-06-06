#include <stdio.h>
#include<math.h>

int main()
{
    int start,end;
    printf("enter range start and end: ");
    scanf("%d %d", &start, &end);
    for(int num= start; num<=end; num++){
        int temp= num, digits=0, result=0;
        while(temp!=0){
            digits++;
            temp/=10;
        }
        temp=num;
        while(temp!=0){
            int rem = temp%10;
            result += pow(rem, digits);
            temp /=10;
        }
        if (result == num)
        printf("%d ", num);
    }
    return 0;

}