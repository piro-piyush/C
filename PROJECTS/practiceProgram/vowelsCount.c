#include <stdio.h>

int main(){

    char str[100];
    int count=0;

    printf("Enter string : ");
    gets(str);

    for(int i=0;i<str[i];i++){
        char ch=str[i];

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;

            printf("\nvowel : %c",ch);
        }
        
    }
    printf("\nNumber of vowels : %d",count);

    return 0;
}