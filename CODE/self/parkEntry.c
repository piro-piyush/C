#include<stdio.h>
int main(){

    int age;
    char gender;
    check2:
    printf("\nEnter age = ");
    scanf("%d",&age);
    check:
    printf("\nEnter gender (M-W) = ");
    scanf(" %c", &gender);

    if(age>=18 && age<50){
        if(gender =='M' || gender =='m'){
            printf("\nEntry allowed");
        }
        else if (gender =='W' || gender =='w'){
            printf("\nNot allowed");
        }
        else{
            printf("\nWrong choice enter again");
            goto check;
        }
    }
    else{
        printf("\nThis age person not allowed");
        goto check2;
    }
    return 0;
}