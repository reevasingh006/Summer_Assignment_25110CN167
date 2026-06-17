// find string lenghth
#include<stdio.h>
int main(){
    char str[100];
    int length = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // condition for finding length
    while(str[length] != '\0'){
        length++;
    }
    printf("Length of string = %d", length-1);
    return 0;
}