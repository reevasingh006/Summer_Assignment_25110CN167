// Students Record Management systems
#include<stdio.h>
// structure to share students details
struct Student
{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    // Declare structure variable
    struct Student s;

    // Display heading
    printf("STUDENT RECORD MANAGEMENT SYSTEM\n ");

    // Take input from user
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    // Display student details
    printf("\nSTUDENT DETAILS\n");
    printf("Roll number: %d\n",s.rollno);
    printf("Name       : %s\n",s.name);
    printf("Marks      : %.2f\n",s.marks);

    return 0;
}