#include<stdio.h>
int main(){

    char word;
    printf("Enter M / F / W = ");
    scanf("%c",&word);

        switch(word)
        {
            case 'm' : printf("Hello Sir");
                        break;
            case 'M' : printf("Hello Sir");
                        break;
            case 'W' : printf("Hello Mam");
                        break;
            case 'w' : printf("Hello Mam");
                        break;
            case 'F' : printf("Hello Lady");
                        break;
            case 'f' : printf("Hello Lady");
                        break;
            default : printf("enter option word");
                        break;
        }
    return 0;
}