#include<stdio.h>

int main(){
    int i,num;
    printf("enter value = ");
    scanf("%d",&num);
    printf("\t\t\t********Table of %d******** ",num);
    
        for(i=1; i<=10; i++)
        {

            printf("\n%d*%d = %d",num,i,i*num);
        }
        printf("\n");
        printf("\t\t\t********END******** ");

        return 0;
}