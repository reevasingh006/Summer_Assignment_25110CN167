// Mini Employee Management System
#include<stdio.h>
int main(){
    int n, i;
    int id[100];
    char name[100][100];
    float salary[100];
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nemployee %d\n", i+1);
        printf("\nEnter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }
    printf("\nEMPLOYEE DETAILS\n");

    for(i=0; i<n; i++){
        printf("\nID      : %d", id[i]);
        printf("\nName    : %s", name[i]);
        printf("\nSalary  : %.2f\n", salary[i]);
    }
    return 0;
}