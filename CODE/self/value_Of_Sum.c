#include<stdio.h>

int main(){
    int i,num,sum=0;
    float avearge;
    printf("Enter a value = ");
    scanf("%d",&num);
        for(i=1; i<=num; i++){
            printf("%d ",i);
            sum=sum+i;
        }
        avearge=(float)sum/num;
        printf("\nSum = %d",sum);
        printf("\nAverage = %f",avearge);
        return 0;
}