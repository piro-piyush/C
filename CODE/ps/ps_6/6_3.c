#include<stdio.h>

int tenx(int *p){
    *p=10*(*p);
    return *p;
}

int main(){

    int i=10;

    printf("\nValue of i : %d",i);

    printf("\nfunction calling : %d",tenx(&i));
    printf("\nAfter calling a : %d",i);

    return 0;
}