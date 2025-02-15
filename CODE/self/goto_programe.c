#include<stdio.h>
int main(){
    int num;
    printf("Enter number = ");
    scanf("%d",&num);
        if(num<0)
        {
            goto end;
        }
        if(num %2==0)
            printf("even number");
        else
            printf("Odd number");
        end:

        return 0;
}