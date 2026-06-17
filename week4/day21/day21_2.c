// reversed string
#include<stdio.h>
int main(){
    int i, length =0; 
    char str[100],temp;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Conditon for reversed string
    while(str[length] != '\0'){
        length++;
    }
    for(i=0; i<length / 2; i++){
        temp = str[i];
        str[i] = str[length - i-1];
        str[length -i-1] = temp;
    }
    printf("Reversed array: %s",str);
    return 0;
}