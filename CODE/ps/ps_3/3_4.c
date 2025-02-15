#include<stdio.h>

int main(){

    //taking variable for storing year
    int year;

    //taking year from user
    printf("Enter year for checking = ");
    scanf("%d",&year);

    //condition
    if(year%4==0)
        printf("%d is Loop year",year);
    else
        printf("%d is  not  Loop year",year);

    return 0;
}