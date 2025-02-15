#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,input,lower=0,higher=100,attempt=0;
    srand(time(NULL));
    num=rand() % 101 ;

    while(1){
        printf("\nGame - Guess the number ");
        printf("\nAttempt :%d ",attempt);
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
            printf("\nYou won !!!!");
            printf("\nYou have guessed number correctly ");
            printf("\nThe number was %d ",num);
            printf("\nAttempt :%d ",attempt);
            return 0;
        }

    }
    return 0;
}