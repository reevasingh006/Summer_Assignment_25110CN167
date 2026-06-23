// Store student details 
#include<stdio.h>
// Structure to store student details
struct student
{
    int rollno;
    char name[100];
    float m1,m2,m3,m4,m5;
    float total;
    float percentage;
};
int main(){
    // Declare structure variable
    struct student s;

    printf("MARKSHEET GENERATION SYSTEM\n");
    // Input student details
    printf("Enter roll number:");
    scanf("%d",&s.rollno);
    
    printf("Enter student Name:");
    scanf("%s", s.name);

    printf("Enter marks of subject 1: ");
    scanf("%f", &s.m1);
    printf("Enter marks of subject 2: ");
    scanf("%f", &s.m2);
    printf("Enter marks of subject 3: ");
    scanf("%f", &s.m3);
    printf("Enter marks of subject 4: ");
    scanf("%f", &s.m4);
    printf("Enter marks of subject 5: ");
    scanf("%f", &s.m5);
    // Calculate total marks
    s.total = s.m1+s.m2+s.m3+s.m4+s.m5;
    // Calculate percentage
     s.percentage = s.total /5;
    // Display marksheet
    printf("STUDENT MARKSHEET DETAILS\n");
    printf("Roll Number   : %d\n",s.rollno);
    printf("Name          : %s\n",s.name);
    printf("Subject 1 Marks : %.2f\n",s.m1);
    printf("Subject 2 Marks : %.2f\n",s.m2);
    printf("Subject 3 Marks : %.2f\n",s.m3);
    printf("Subject 4 MArks : %.2f\n",s.m4);
    printf("Subject 5 Marks : %.2f\n",s.m5);
    printf("\nTotal Marks : %.2f\n",s.total);
    printf("Percentage : %.2f%%\n",s.percentage);

    // Detemine grade
    if(s.percentage >= 90){
        printf("Grade : A+\n");
    }else if(s.percentage >= 80){
        printf("Grade : A\n");
    }else if(s.percentage >= 70){
        printf("Grade : B\n");
    }else if(s.percentage >=60){
        printf("Grade : C\n");
    }else if(s.percentage >= 50){
        printf("Grade : D\n");
    }else{
        printf("Grade : F\n");
    }
return 0;

}