// sort words by length
#include<stdio.h>
#include<string.h>
int main(){
    char words[20][50],temp[50];
    int n,i,j;
    // Input number by words
    printf("Enter number of words: ");
    scanf("%d", &n);
    printf("Enter words: ");
    for(i=0; i<n; i++){
        scanf("%s", words[i]);
    }
    // Sort words by length
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(strlen(words[i]) > strlen(words[j])){
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j],temp);
            }
        }
    }
    printf("Words Sorted by length:\n");
    for(i=0; i<n; i++){
        printf("%s\n", words[i]);
    }
    return 0;
}