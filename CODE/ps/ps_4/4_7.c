 #include<stdio.h>
 int main(){

 int sum=0;
    for(int i=1;i<=10;i++)
    {
        printf("\n8 X %d = %d",i,i*8);
        sum=sum+i*8;
    }
    printf("\nSum = %d ",sum);
    return 0;
 }