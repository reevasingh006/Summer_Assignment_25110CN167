// Quiz preparation
#include<stdio.h>
int main(){
    int score = 0, ans;

    printf("WWELCOME TO QUIZ APPLICATION\n");
    // Questions 
    printf("Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1){
        score++;
    }
    printf("\nQ2. 5 + 3 = ?\n");
    printf("1. 6\n2. 8\n3. 11\n");
    scanf("%d", &ans);

    if(ans == 2){
        score++;
    }
    printf("Q3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &ans);

    if(ans == 1){
        score++;
    }

    printf("Your Score = %d/3\n", score);
    printf("Thank You for Playing!\n");

    return 0;
}