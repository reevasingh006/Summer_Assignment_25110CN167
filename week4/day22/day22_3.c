// Character frquency
#include<stdio.h>
 int main(){
    char str[100], ch;
    int i, count = 0;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to find frequency: ");
    scanf("%c", &ch);
    // Condition for frequency
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count ++;
        }
    }
    printf("Frequency of %c = %d", ch, count);
    return 0;
 }