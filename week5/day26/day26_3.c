// atm stimulation
#include<stdio.h>
int main(){
    float balance = 100000, amount;
    int choice;

    do{
        printf("\n1. check balance");
        printf("\n2. Deposits");
        printf("\n3. withdraw");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        // condition
        switch(choice){
            case 1:
            printf("Balance = %.2f\n", balance);
            break;

            case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated balance = %.2f\n", balance);
            break;

            case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount <= balance){
                balance -= amount;
                printf("Updated Balance = %.2f\n", balance);
            }
            else{
                printf("Insufficient balance\n");
            }
            break;

            case 4:
            printf("Thank You!\n");
            break;

            default:
            printf("Invalid choice\n");
        }
    }
    while(choice != 4);

    return 0;

}