// studennt record using array and strings
#include<stdio.h>
int main(){
    int n, i;
    char name[100][100];
    int rollno[50];
    float marks[50];
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nStudents %d\n", i+1);

        printf("Enter roll no: ");
        scanf("%d", &rollno[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\nSTUDENTS RECORD\n");

    for(i=0; i<n; i++){
        printf("Roll No. : %d\n",rollno[i]);
        printf("Name     : %s\n", name[i]);
        printf("Marks.   : %.2f\n\n", marks[i]);
    }
    return 0;
}