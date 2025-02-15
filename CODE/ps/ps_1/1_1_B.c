#include<stdio.h>

int main(){
    int r,area;
    printf("Enter radius = ");
    scanf("%d",&r);
    printf("You entered r = %d\n",r);
    area = 3.14*r*r;
    printf("Area = %d",area);
    return 0;
}