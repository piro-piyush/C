#include<stdio.h>

int main(){
    int i,num,sum=0;
    printf("Value = ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nSum = %d",sum);
    return 0;
}