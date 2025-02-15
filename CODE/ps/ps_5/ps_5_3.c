#include<stdio.h>

float force(float,float);

int main(){
    float F,M,a,g=9.8;
    printf("Program to find F (force) by entring M (mass)");
    printf("\nEnter mass (M) : ");
    scanf("%f", &M);

    printf("\nWhen object is falling then a = g and g = 9.8 m/s2");
    a=g;

    F = force(M,a);
    printf("\nForce = %f N",F);

    return 0;
}
float force(float M, float a){
    return M*a;
}