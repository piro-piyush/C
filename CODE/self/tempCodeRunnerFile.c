#include<stdio.h>

long factorial(long n){
    if(n==0){
        return 1;
    }
    else 
        return n*factorial(n-1);
}

int main(){
    long num;
    long fact;
    printf("Enter a value : ");
    scanf("%ld",&num);

    fact=factorial(num);
    printf("Factorial of %ld is %ld ",num,fact);

    return 0;
    
}
