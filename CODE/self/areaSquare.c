#include<stdio.h>
int getAreaOfSquare(int side){ 
    int area;
    area = side*side;
    return area;
}

int main(){
    int side,area,area2;
    printf("Enter side : ");
    scanf("%d",&side);

    area = getAreaOfSquare(side);
    area2 = getAreaOfSquare(11);
    printf("Area = %d ",area);
    printf("Area  2 = %d ",area2);

    return 0;

}