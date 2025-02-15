#include<stdio.h>
int main(){
    int ch,num1,num2,result=0;
    printf("\033[1;36m");
    printf("\n \t\t\t\t\t\t\tArithmetic Operations");
    printf("\033[0m");
    printf("\n\t\t\t\t\t\t\t 1. Addition");
    printf("\n\t\t\t\t\t\t\t 2. Subtraction");
    printf("\n\t\t\t\t\t\t\t 3. Multiplication");
    printf("\n\t\t\t\t\t\t\t 4. Divison");
    printf("\033[1;31m");
    printf("\n\t\t\t\t\t\t Enter your choice (1-4) = ");
    printf("\033[0m");
    scanf("%d",&ch);
    printf("\n\t\t\t\t\t\t\t Enter first value = ");
    scanf("%d",&num1);
    printf("\t\t\t\t\t\t\tEnter second value = ");
    scanf("%d",&num2);
    switch(ch)
    {
        case 1 : result = num1+num2;
        printf("\033[1;32m");
        printf("\n\t\t\t\t\t\t\t Addition: %d",result);
        break;
        case 2 : result = num1-num2;
        printf("\033[1;35m");
        printf("\n\t\t\t\t\t\t\t Subtraction: %d",result);
        break;
        case 3 : result = num1*num2;
        printf("\033[1;33m");
        printf("\n\t\t\t\t\t\t\t Multiplication: %d",result);
        break;
        case 4 : result = num1/num2;
        printf("\033[1;34m");
        printf("\n\t\t\t\t\t\t\t Divison: %d",result);
        break;
        printf("\033[1;40m");
        default : printf("\n\t\t\t\t\t\t\t invalid choice");
        printf("\033[0m");
        break;
    }
    return 0;
}