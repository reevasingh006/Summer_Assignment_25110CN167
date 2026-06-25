// Menu Driven Array Operations
#include<stdio.h>
 int main(){
    int arr[100], n, i, choice, pos, value;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    do{
        printf("\nARRAY OPERATIONS\n");
        printf("1. Display Array\n");
        printf("2. Insert Elements\n");
        printf("3. Delete Elements\n");
        printf("4. Search Elements\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Array Elements:");
            for(i=0; i<n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

            case 2:
            printf("enter position and value:");
            scanf("%d%d", &pos,&value);
            for(i=n; i>=pos; i--)
            arr[i] = arr[i-1];
            arr[pos-1] = value;
            n++;
            printf("Elements Inserted.\n");
            break;

            case 3:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            for(i= pos -1; i<n-1; i++)
            arr[i] = arr[i+1];
            n--;
            printf("Elements Deleted.\n");
            break;

            case 4:
            printf("Enter Value to Search: ");
            scanf("%d", &value);
            for(i=0; i<n; i++){
                if(arr[i] == value){
                    printf("Found at position %d\n", i+1);
                    break;
                }
            }
            if(i==n)
            printf("Not found\n");
            break;

            case 5:
            printf("Exiting...\n");
            break;

            default:
            printf("Invalid choice!\n");
        }
    }
    while(choice != 5);
    return 0;
}