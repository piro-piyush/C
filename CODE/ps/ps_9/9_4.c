#include<stdio.h>

struct student{
    int age;
};

int main(){
    struct student p1;
    struct student *ptr;
    ptr=&p1;
    ptr->age=18;

    printf("Age : %d",ptr->age);
    
    return 0;
}