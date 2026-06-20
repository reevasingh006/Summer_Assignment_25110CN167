// Longest word
#include<stdio.h>
#include<string.h>
int main(){
    char str[200], longest[50];
    int maxLen = 0;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");

    while (word != NULL){
        if(strlen(word) > maxLen){
            maxLen = strlen(word);
            strcpy(longest,word);
        }
        word = strtok(NULL, " \n");
    }
    printf("Longest word: %s", longest);
    return 0;
}