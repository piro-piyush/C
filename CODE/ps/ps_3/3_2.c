#include<stdio.h>

int main(){
    float computer,english,math;
    float totalmarks,percentage;

    printf("Enter marks for Computer = ");
    scanf("%f",&computer);
    printf("Enter marks for English = ");
    scanf("%f",&english);
    printf("Enter marks for Math = ");
    scanf("%f",&math);

    totalmarks=computer+english+math;

    percentage=(totalmarks/300)*100;

    if(percentage>=40 && computer>=33 && english>=33 && math>=33)
    {
        printf("\nCongratulations! you passed ");
        printf("\nYour Percentage = %.2f%%",percentage);

    }
    else
        printf("\nSorry! you failed. please try again.");

    return 0;
}