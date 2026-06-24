// Library Management System 
#include<stdio.h>

struct Library{
    int bookid;
    char title[100];
    char author[100];
};
int main(){
    struct Library b;
    // Input details
    printf("Enter Bookid : ");
    scanf("%d", &b.bookid);

    printf("Enter Book Title : ");
    scanf(" %[^\n]", b.title);

    printf("Enter author Name : ");
    scanf(" %[^\n]", b.author);

    printf("\n LIBRARY RECORD\n");

    printf("Book ID: %d\n", b.bookid);

    printf("Title: %s\n", b.title);

    printf("Author: %s\n", b.author);
    return 0;
}