#include<stdio.h>

int add(int);

int main(){

    int num,sum=0;
    printf("Enter no : ");
    scanf("%d",&num);

    sum=add(num);
    printf("\nSum value : %d",sum);
    return 0;
}

int add(int n){
    if(n!=0){
        printf(" %d",n);
        return n + add(n-1);
    }

    else{
        return n;
    }
}