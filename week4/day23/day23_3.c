// program to check anagram
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    int count[200]= {0}, count2[200] = {0};
    int i;
    // Input strings
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    // count
    for(i=0; str1[i] != '\0'; i++){
        count[(int)str1[i]]++;
    }
        for(i=0; str2[i] != '\0'; i++){
            count2[(int)str2[i]]++;
    }
    for(i=0; i<200; i++){
        if(count[i] != count2[i]){
            printf("string are not anagrams.");
            return 0;
        }
    }
    printf("strings are anagrams.");
    return 0;
}