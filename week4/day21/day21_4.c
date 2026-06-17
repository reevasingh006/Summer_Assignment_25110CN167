// convert lowercase to uppercase string
#include<stdio.h>
int main(){
    char str[100];
    int i = 0;
    // Input string
    printf("Enter a lower case string: ");
    fgets(str, sizeof(str), stdin);
    // Condition 
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Upper case string = %s", str);
    return 0;
}