#include<stdio.h>

void address(int *a){
    printf("\nAddress of variable : %d\n",&a);
}

int main(){
    int i;
    printf("\nAddress of i : %u",&i);

    printf("\n");
    address(&i);

    return 0;
}