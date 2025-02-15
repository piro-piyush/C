#include<stdio.h>
float convert(float);

int main(){
float celsius;
printf("Enter temperature in celsius : ");
scanf("%f",&celsius);

float k = convert(celsius);
printf("Temperature = %.2f K",k);
return 0;
}
float convert(float celsius)
{
    return celsius + 273.15;
}