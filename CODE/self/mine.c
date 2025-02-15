#include<stdio.h>

int main(){
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    if(num>0)
        printf("Num is positive\n");
    else if(num==0)
        printf("Num is zero\n");
    else
        printf("Num is negetive\n");
        return 0;

}