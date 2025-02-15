#include<stdio.h>

int main(){
    char word;
    printf("Enter a character = ");
    scanf("%c",&word);
    if((int)word>=97 && (int)word<=122)
        printf("Lowercase");
    else
        printf("Uppercase");

    return 0;
        
}