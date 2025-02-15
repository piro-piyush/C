#include<stdio.h>

int main(){
    int num,sum=0;
    
    while(1){
            printf("\n\nEnter num = ");
            scanf("%d",&num);
            if(num>0){
                printf("Number = %d",num);
                sum=sum+num;
            }
            else{
                printf("Sum = %d",sum);
                printf("\nProgramme terminated");
                return 0;
            }
    }
    return 0;
}