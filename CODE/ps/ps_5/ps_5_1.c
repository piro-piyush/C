#include<stdio.h>

float avg(int,int,int);

int main(){
    int a,b,c;
    float average=0;
    printf("Enter a value : ");
    scanf("%d",&a);
    printf("Enter b value : ");
    scanf("%d",&b);
    printf("Enter c value : ");
    scanf("%d",&c);

    average= avg(a,b,c);
    printf("Avg : %.2f",average);

    return 0;
}

float avg(int a,int b,int c){
    return (float)(a+b+c)/3;
}