#include<stdio.h>
int main(){
    int ch,num1,num2,result=0;
    while(1){
    printf("\n\t\t\t\t\t\t\t\t\t\tCalculator");
    printf("\n Arithmetic Operations");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Divison");
    printf("\n 5. Exit");

    printf("\n Enter your choice (1-5) = ");
    scanf("%d",&ch);
    if(ch==5){
        printf("\nCalculator shutting down ........");
        return 0;
    }
    printf("\n Enter first value = ");
    scanf("%d",&num1);
    printf("Enter second value = ");
    scanf("%d",&num2);
    switch(ch)
    {
        case 1 : result = num1+num2;
        printf("\n Addition: %d",result);
        break;
        case 2 : result = num1-num2;
        printf("\n Subtraction: %d",result);
        break;
        case 3 : result = num1*num2;
        printf("\n Multiplication: %d",result);
        break;
        case 4 : result = num1/num2;
        printf("\n Divison: %d",result);
        break;
        default : printf("\n invalid choice");
        break;
    }
    }
    return 0;
}