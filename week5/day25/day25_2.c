// program to find common character
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    // Input string
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("common characters: ");
    for(int i=0; str1[i] != '\0'; i++){
        int duplicate = 0;
        for(int k=0; k<i; k++){
            if(str1[i] == str1[k]){
                duplicate = 1;
                break;
            }
        }
        if(duplicate)
        continue;
        // check if character exists in str2
        for(int j=0; str2[j] != '\0'; j++){
            if(str1[i] == str2[j]){
                printf("%c ", str1[i]);
                break;
            }
        }
    }
    return 0;
}