#include<stdio.h>

void fun(int *a, int *b){
    int sum = *a+*b;
    int average = sum/2;
    printf("\nSum = %d",sum);
    printf("\nAverage = %d",average);
}

int main(){
    int x,y;

    printf("\nEnter x value : ");
    scanf("%d",&x);
    printf("\nEnter y value : ");
    scanf("%d",&y);

    fun(&x,&y);

    return 0;
}