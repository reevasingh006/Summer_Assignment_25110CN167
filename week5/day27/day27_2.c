// Store employee detail
#include<stdio.h>
// Structure to store details
struct Employee
{
    int id;
    char name[200];
    float salary;
};
int main(){
    // Declare structure variable
    struct Employee e;
    // Display heading
    printf("EMPLOYEE MANAGEMENT SYSTEM\n");
    // Input employee details 

    printf("Enter Employee ID:");
    scanf("%d", &e.id);

    printf("Enter Employee Name:");
    scanf("%s", e.name);

    printf("Enter Salary:");
    scanf("%f", &e.salary);
    // Display employee details
    printf("EMPLOYEE DETAILS\n");
    printf("Employee ID. : %d\n",e.id);
    printf("Employee Name: %s\n",e.name);
    printf("Salary       : %.2f\n",e.salary);

    return 0;
}