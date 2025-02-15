#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
        switch(num)
        {
            case 1 : printf("sunday");
                     break;
            case 2 : printf("monday");
                     break;
            case 3 : printf("tuesday");
                     break;
            case 4 : printf("wednesday");
                     break;
            case 5 : printf("thursday");
                     break;
            case 6 : printf("friday");
                     break;
            case 7 : printf("saturdy");
                     break;
            default: printf("invalid input");
                     break;
        }
    return 0;
}