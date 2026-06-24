// Bank Account Management System
#include<stdio.h>
struct Bank{
    int accNo;
    char name[100];
    float balance;
};
int main(){
    struct Bank a;

    printf("Enter Account Number:");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter Balance:");
    scanf("%f", &a.balance);

    printf("\nACCOUNT DETAILS\n");

    printf("Account No : %d\n",a.accNo);

    printf("Name       : %s\n",a.name);

    printf("Balance    : %.2f\n", a.balance);

    return 0; 

}