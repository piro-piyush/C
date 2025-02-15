#include<stdio.h>

int main(){
    int x,y,temp;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);

    printf("Before = %d, %d",x,y);
    temp = y;
    y = x;
    x = temp;
    printf("\nAfter = %d, %d",x,y);
    return 0;
}