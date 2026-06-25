// Inventory Management System 
#include<stdio.h>
struct product{
    int id;
    char name[100];
    int quantity;
    float price;
};
int main(){
    struct product p[100];
    int n,i;

    printf("Enter number of products: ");
    scanf("%d", &n); 

    for(i=0; i<n; i++){
        printf("\nEnter Products %d Details\n", i+1);

        printf("Product ID: ");
        scanf("%d", &p[i].id);

        printf("Product name: ");
        scanf("%s", p[i].name);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Price:");
        scanf("%f", &p[i].price);
    }
    printf("\nINVENTORY MANAGEMENT DETAILS\n");
    for(i=0; i<n; i++){
        printf("\nProduct ID: %d", p[i].id);
        printf("\nProduct Name: %s",p[i].name);
        printf("\nQuantity: %d", p[i].quantity);
        printf("\nPrice: %.2f\n", p[i].price);
    }
    return 0;
}