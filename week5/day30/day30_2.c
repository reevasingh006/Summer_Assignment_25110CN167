// Mini library system
#include<stdio.h>
int main(){
    int n, i;
    char book[100][100];
    char author[100][100];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nBook %d\n",i+1);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", book[i]);

        printf("Enter Aurhor Name:");
        scanf(" %[^\n]", author[i]);
    }
    printf("\nLIBRARY RECORD\n");
    for(i=0; i<n; i++){
        printf("\nBook Name: %s", book[i]);
        printf("\nAuthor Name:%s\n", author[i]);
    }
    return 0;
}