#include<stdio.h>
int main(){
        char word;
        printf(" Enter a character = ");
        scanf("%c",&word);
            switch(word)
            {
                case 'a' : printf("vowel");
                            break;
                case 'e' : printf("vowel");
                            break;
                case 'i' : printf("vowel");
                            break;
                case 'o' : printf("vowel");
                            break;
                case 'u' : printf("vowel");
                            break;
                default : printf("consonent");
                            break;

            }
        return 0;
}