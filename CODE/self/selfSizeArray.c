#include<stdio.h>
int main(){

    int i;
    float sum=0;
    float num[6];
    int arraySize = sizeof(num)/sizeof(num[0]);
    printf("Array length : %d",arraySize);

    for(i=0;i<arraySize;i++){
        printf("\nEnter value : ");
        scanf("%f",&num[i]);
    }
    for(i=0;i<arraySize;i++){
        printf("\n%d value : %.2f",i,num[i]);
    }
    for(i=0;i<arraySize;i++){
        sum += num[i];
    }
    printf("\nSum value : %.2f",sum);
    
        return 0;
}