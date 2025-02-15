#include<stdio.h>

long factorial(long);

int  main(){
    long num;
    long fact;

    printf("Enter number : ");
    scanf("%ld",&num);

    fact=factorial(num);
    printf("Factorial of %ld is %ld",num,fact);

    return 0;
}
long factorial(long n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}