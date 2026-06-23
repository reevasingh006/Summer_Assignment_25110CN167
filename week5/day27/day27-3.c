// Salary Management System 
#include<stdio.h>
struct Employee 
{
    int empid;
    char name[100];
    float basic;
    float hra;
    float da;
    float gross;
};
int main(){
    // Declare structure variabes
    struct Employee e;
    printf("SALARY MANAGEMENT SYSTEM\n");
    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.empid);

    printf("Enter Employee Name: ");
    scanf("%s",e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    // Calculate HRA (20% of basic salary)
    e.hra = e.basic * 0.20;
    // Calculate DA (10% of basic salary)
    e.da = e.basic * 0.10;
    // Calculate gross salary 
    e.gross = e.basic + e.hra + e.da;
    // Display salary details 
    printf("EMPLOYEE SALARY DETAILS\n");
    printf("Employee ID     : %d\n",e.empid);
    printf("Employee Name   : %s\n",e.name);
    printf("Basic Salary    :%.2f\n",e.basic);
    printf("HRA (20%%)      : %.2f\n",e.hra);
    printf("DA (10%%)       : %.2f\n",e.da);
    printf("Gross salary    : %.2f\n",e.gross);

    return 0;
}