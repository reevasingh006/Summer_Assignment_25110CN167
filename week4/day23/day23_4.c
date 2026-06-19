// program to find maximum character
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq[200] = {0};
    int i, max=0;
    char maxchar;
    // Input string
    printf("Enter a string: ");
    scanf("%s", str);
    // Count frequency of each character
    for(i=0; str[i] != '\0'; i++){
        freq[(int)str[i]]++;
    }
    for(i=0; i<200; i++){
        if(freq[i] > max){
        max = freq[i];
        maxchar = i;
    }
}
printf("Maximum occured character:%c", maxchar);
printf("\nFrequency: %d", max);
return 0;
}