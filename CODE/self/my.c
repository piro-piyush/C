#include<stdio.h>
#define AREA(a,b) (a*b)

int main(){
    int L1=4,L2=5,area;

    area= AREA(L1, L2);

    printf("\nArea of rectangle is : %d \n\n",area);

    return 0;
}