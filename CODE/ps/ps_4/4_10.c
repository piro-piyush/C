#include<stdio.h>
int main(){

    int i=2,num;
    printf("Enter value = ");
    scanf("%d",&num);

        // for(i=2;i<num;i++){
        //     if(num%i==0){
        //         printf("Non prime");
        //         return 0;
        //     }
        // }
        // printf("Prime");


        // while(i<num){
        //     if(num%i==0){
        //         printf("Non prime");
        //         return 0;
        //     }
        //     i++;
        // }
        //  printf("Prime");


        do{
            if(num%i==0){
                printf("Non prime");
                return 0;
            }
            i++;
        }
        while(i<num);
        printf("Prime");
    return 0;
}