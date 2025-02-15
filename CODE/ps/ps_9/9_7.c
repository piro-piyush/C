#include<stdio.h>

// Define a new type 'Complex' for 'struct complex'
typedef struct complex {
    int real;
    int img;
} Complex;

void display(Complex num[], int);

int main() {
    Complex num[5];  // Use the new type name 'Complex'

    for(int i = 0; i < 5; i++){
        printf("\nEnter %d complex number value:", i+1);
        printf("\nEnter real part: ");
        scanf("%d", &num[i].real);
        printf("Enter img part: ");
        scanf("%d", &num[i].img);
    }

    display(num, 5);

    return 0;
}

void display(Complex num[], int size) {
    for (int j = 0; j < size; j++)
    {
        printf("\nComplex number %d = %d + %di", j + 1, num[j].real, num[j].img);
    }
}
