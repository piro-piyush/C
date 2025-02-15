#include<stdio.h>

int main(){
    float tax,salary;
    printf("Enter your salary in lakhs = ");
    scanf("%f",&salary);
    if(salary<2.5)
        tax=0;
    else if(salary>2.5 && salary<5.0)
        tax=salary*0.05;
    else if(salary>5.0 && salary<10.0)
        tax=salary*0.20;
    else
        tax=salary*0.30;
    
    printf("Your tax is %f L (in Lakhs)",tax);
    printf("\nTotal tax = %f",tax*100000);

    return 0;
    
}