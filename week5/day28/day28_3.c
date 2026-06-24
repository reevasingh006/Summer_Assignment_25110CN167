// Ticket Booking System
#include<stdio.h>

struct Ticket
{
    char name[200];
    int seatno;
};
int main(){
    struct Ticket t;
    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter seat number: ");
    scanf("%d", &t.seatno);

    printf("\nTICKET DETAILS\n");

    printf("Passenger Name:%s\n", t.name);

    printf("Seat number: %d\n", t.seatno);

    return 0;
}