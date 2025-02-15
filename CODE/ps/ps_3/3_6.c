#include<stdio.h>

int main(){
    char word;
    int max;
    int a,b,c,d;

    //Taking value
    printf("\nEnter 1st value = ");
    scanf("%d",&a);
    printf("\nEnter 2nd value = ");
    scanf("%d",&b);
    printf("\nEnter 3rd value = ");
    scanf("%d",&c);
    printf("\nEnter 4th value = ");
    scanf("%d",&d);

    //checking conditions
    if(a>b)
       { max=a;
        word ='A';}
    else
       { max=b;
        word ='B';}

    if(max>c)
        max=max;
    else
        {max=c;
        word ='C';}

    if(max>d)
        max=max;
    else
        {max=d;
        word ='D';}

    printf("\nMaximum is %c = %d",word,max);
    return 0;
}