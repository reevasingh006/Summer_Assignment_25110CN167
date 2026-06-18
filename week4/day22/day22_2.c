// count words in a sentence
#include<stdio.h>
int main(){
    char str[100];
    int i, words=1;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Condition
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            words++;
        }
    }
    printf("Number of words = %d", words);
    return 0;
}
