#include<stdio.h>
void areaRectangle(int length,int width){
    int area=length*width;
    printf("\nArea = %d",area);
    // return length*width;
}
int main(){
    
    int length,width,area;
    printf("\nEnter length = ");
    scanf("%d",&length);
    printf("\nEnter width = ");
    scanf("%d",&width);

    // area = areaRectangle(length,width);
    // printf("Area = %d",area);

    areaRectangle(length,width);

    return 0;
}
