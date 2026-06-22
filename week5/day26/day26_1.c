// Number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess;
    srand(time(0));
    number = rand() % 100 + 1;

    // Input number 
    printf("Enter number between 1 and 100\n");
    
    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > number){
            printf("Too high!");
        }else if(guess < number){
            printf("Too Low!");
        }else{
            printf("Congratulations! You guessed correctly.\n");
        }
    }while(guess != number);
    return 0;    
}