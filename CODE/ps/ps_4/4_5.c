#include<stdio.h>
int main()
{
int sum=0;
int i=1;
    // for(i=1;i<=10;i++)
    // {
        // printf("%d ",i);             // For loop
        // sum=sum+i;
    // }

    while(i<=10)
    {
        printf("%d ",i);             // While loop
        sum=sum+i;
         i++;
    }

    // do{
    //     printf("%d ",i);          // Do while loop
    //     sum=sum+i;
    //     i++;
    // }
    // while (i<=10);

    printf("\nSum = %d",sum);
    return 0;
}
    