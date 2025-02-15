#include<stdio.h>
// void area(float radius){
//     float area=3.14*radius*radius;
//     printf("Area = %.2f",area);
// }

        float area1(float radius){
            float area = 3.14 *radius*radius;
            return area;
        }
int main(){

    float radius,area;
    printf("Enter value =");
    scanf("%f",&radius);

    // area(radius);
    area = area1(radius);
    printf("Area = %f",area);
    return 0;
}