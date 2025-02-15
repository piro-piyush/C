#include<stdio.h>

int main(){
    int i,sum=0;
    int num[6]={3,4,6,7,5,6};
    int sizeArray = sizeof(num)/sizeof(num[0]);
    printf("Array length = %d",sizeArray);

    // for(i=0;i<sizeArray;i++){
    //     printf("\nEnter value :");
    //     scanf("%d",&num[i]);
    //

    for(i=3;i<=5;i++){
        printf("\n %d value = %d",i,num[i]); 
    }
    
    for(i=0;i<sizeArray;i++){
        sum += num[i];
    }
    printf("\n Sum = %d",sum);

    return 0;

}