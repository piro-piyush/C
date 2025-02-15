#include<stdio.h>

int sum(int);

int main(){
    int num,c=0;
    printf("\nEnter a value : ");
    scanf("%d",&num);

    c=sum(num);
    printf("\nSum : %d",c);
    return 0;
}

int sum(int n){
    if(n!=0){
        return n+sum(n-1);
    }
    else
        return n;
}