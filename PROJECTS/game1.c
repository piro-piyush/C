#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,input,lower=0,higher=100,attempt=0;
    srand(time(NULL));
    num=rand() % 101 ;

    while(1){
        printf("\033[1;36m");
        printf("\nGame - Guess the number ");
        printf("\033[1;31m");
        printf("\nAttempt :%d ",attempt);
        printf("\033[0m");
        printf("\nEnter number (%d-%d) :",lower,higher);
        scanf("%d",&input);
        attempt++;

        if(input<num){
            printf("\nEnter greater value ");
            if(input>lower){
                lower=input;
            }

        }
        else if(input>num){
            printf("\nEnter smaller value ");
            if(input<higher){
                higher=input;
            }
        }
        else{
            printf("\033[1;33m");
            printf("\nYou won !!!!");
            printf("\nYou have guessed number correctly ");
            printf("\nThe number was %d ",num);
            printf("\033[1;32m");
            printf("\nAttempt :%d ",attempt);
            printf("\033[0m");
            return 0;
        }

    }
    return 0;
}