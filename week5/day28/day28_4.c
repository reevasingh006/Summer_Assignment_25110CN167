// Contact Management system
#include<stdio.h>

struct Contact{
    char name[100];
    long long phone;
};
int main(){
    struct Contact c;

    printf("Enter Name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter Phone Number: ");
    scanf("%lld", &c.phone);

    printf("\nCONTACT MANAGEMENT SYSTEM\n");
    printf("Name     :%s\n", c.name);
    printf("Phone    :%lld\n", c.phone);

    return 0;
}