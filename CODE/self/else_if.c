#include<stdio.h>

int main(){
    int num;
    printf("Enter a Num = ");
    scanf("%d",&num);
    
    if(num>0)
        printf("Number is positive\n");
    else if(num==0)
        printf("Number is zero\n");
    else
        printf("Number is Negative\n");

return 0;
}