#include<stdio.h>
int main(){

    int num;
    int factorial=1;
    
    printf("Enter a number = ");
    scanf("%d",&num);
    int i=num;
    
    for(i=num;i>0;i--){
        factorial=factorial*i;
    }

    
    // while(i>0){
    //    factorial=factorial*i;
    //    i--; 
    // }


    // do{
    //     factorial=factorial*i;
    //    i--; 
    // }
    // while(i>0);

    printf("factorial = %d",factorial);
    return 0;
}