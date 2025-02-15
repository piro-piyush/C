#include<stdio.h>

int main(){
    int r,h,area;
    printf("radius = ");
    scanf("%d",&r);
    printf("Enter h = ");
    scanf("%d",&h);
    area=3.14*r*r*h;
    printf("area = %d",area);
    return 0;
}