// program to find first non- repeating character
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, j, len, count=0;
    // Input string
    printf("Enter string: ");
    scanf("%c", str);
    len = strlen(str);
    // check each character
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count == 1){
            printf("First non-repeating character:%c", str[i]);
        return 0;
        }
    }
    
        printf("No non-repeating character");
    
    return 0;
}