// Mini project
#include<stdio.h>

int roll[100];
char name[100][100];
float marks[100];
int n=0;

// Function to add student
void addstudent(){
    printf("\nenter Roll no: ");
    scanf("%d", &roll[n]);
    printf("Enter Name:");
    scanf(" %[^\n]", name[n]);

    printf("Enter Marks:");
    scanf("%f", &marks[n]);

    n++;

    printf("Student Added Successfully!\n");
}
// Function to display students
void displaystudents(){
    int i;

    if(n==0){
        printf("\nNo Records found!\n");
        return;
    }
    printf("\nSTUDENTS RECORDS\n");

    for(i=0; i<n; i++){
        printf("\nRoll No: %d", roll[i]);
        printf("\nName   : %s", name[i]);
        printf("\nMarks  : %.2f\n", marks[i]);
    }
}
int main(){
    int choice;

    do{
        printf("\nSTUDENTS MANAGEMENT SYSTEM\n");

        printf("1. Add Students\n");

        printf("2. Display Students\n");

        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            addstudent();
            break;

            case 2:
            displaystudents();
            break;

            case 3:
            printf("Thank You!\n");
            break;

            default:
            printf("Invalid Choice!\n");
        }
    }while(choice != 3);

    return 0;
}
