// string rotation
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100], temp[200];
    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    // Condition
    strcpy(temp, str1);
    strcat(temp,str1);

    if(strlen(str1) == strlen(str2) && strstr(temp,str2)){
        printf("Strings are rotation of each other");
    }else{
        printf("Strings are not rotation of each other.");
    }
    return 0;
}
