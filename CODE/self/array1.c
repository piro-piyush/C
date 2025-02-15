#include<stdio.h>

int main(){
    int i;
    int age[]={9,11,18,20};
    printf("Age of first = %d",age[3]);
    printf("\nEnter : ");
    scanf("%d",&i);
    printf("\nAge of second = %d",age[i]);
    return 0;
}