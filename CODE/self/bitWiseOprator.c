#include<stdio.h>

int main(){
    int a = 12,b =25;

    //Bitwise AND
    printf("\n\nAfter using Bitwise AND");
    printf("\nOutput = %d", a & b);

    //bit wise OR
    printf("\n\nAfter using Bitwise OR");
    printf("\nOutput = %d", a | b);

    //Bitwise XOR
    printf("\n\nAfter using Bitwise XOR");
    printf("\nOutput = %d", a ^ b);

    //Bitwise complement
    printf("\n\nAfter using Bitwise Complement");
    printf("\nOutput = %d", ~ a);

    //Bitwise Shift left
    printf("\n\nAfter using Bitwise Shift left");
    printf("\nOutput = %d", a << 1);

    //Bitwise Shift right
    printf("\n\nAfter using Bitwise Shift right");
    printf("\nOutput = %d", a >> 1);
    
    return 0;
}