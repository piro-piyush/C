#include<stdio.h>

int main(){
    int i;
    printf("Enter value = ");
    scanf("%d",&i);

    while(i>=10)
    {
        printf("\n %d",i);
        i--;
    }
    return 0;
}