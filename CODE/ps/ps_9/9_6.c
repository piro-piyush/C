#include<stdio.h>

struct complex{
    int  real;
    int img;
};

void display(struct complex num[],int);

int main(){

    struct complex num[5];

    for(int i=0;i<5;i++){
        printf("\nEnter %d complex number value",i+1);
        printf("\nEnter real part :");
        scanf("%d",&num[i].real);
        printf("Enter img part :");
        scanf("%d",&num[i].img);
    }

    display(num,5);

    return 0;
}

void display(struct complex num[], int index){
    for (int j=0;j<index;j++)
    {
        printf("\nComplex number = %d + %di",num[j].real,num[j].img);
    }
    
}