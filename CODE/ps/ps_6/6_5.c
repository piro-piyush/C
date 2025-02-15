#include<stdio.h>

int main(){

    int i=5;

    printf("\nValue of i : %d",i);

    int *ptr1 = &i;

    printf("\nValue of I by ptr1 : %d",*ptr1);

    int **ptr2=&ptr1;

    printf("\nvalue of ptr1 by ptr2 : %d",*ptr2);
    printf("\nvalue of i by ptr2 : %d",**ptr2);

    int ***ptr3=&ptr2;
    

    printf("\nvalue of ptr2 by ptr3 : %d",*ptr3);
    printf("\nvalue of ptr1 by ptr3 : %d",**ptr3);
    printf("\nvalue of i by ptr3 : %d",***ptr3);
    return 0;
}