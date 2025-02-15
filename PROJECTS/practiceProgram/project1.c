#include<stdio.h>

int main(){

    int i,j;

    for (i=0 ; i < 10 ; i++){
        if(i<6){
            for(j = 0 ; j < i ; j++){
                printf(" * ");
            }
             printf("\n");
        } 
        else{
                for(j = 0 ; j < 10-i ; j++){
                      printf(" * ");
                }
                printf("\n");
            }
    }

    return 0;
}