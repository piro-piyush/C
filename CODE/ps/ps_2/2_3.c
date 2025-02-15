#include<stdio.h>

int main(){
    int num;
    printf("Enter a value = ");
    scanf("%d",&num);
    if(num%97==0)
    {
        printf("\nIt is divisible by 97");
    }
    else
    {
        printf("It is not divisible by  97");
    }
    return 0; 
}
