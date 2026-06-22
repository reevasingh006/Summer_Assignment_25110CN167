// Voting eligibility system 
#include<stdio.h>
int main(){

    int age;
    // Input your age
    printf("Enter your age: ");
    scanf("%d", &age);
    // Condition
    if(age>=18){
        printf("Eligible to vote\n ");
    } else{
        printf("Not Eligible to vote\n");
    }
    return 0;
}