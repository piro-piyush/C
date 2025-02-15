#include<stdio.h>

int main(){
    int i=4;
    int *p;
    p=&i;
    
    printf("Address of i : %u",&i);
    printf("\nAddress of i : %u",*(&i));
    
    return 0;
}