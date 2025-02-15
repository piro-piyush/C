#include<stdio.h>

   typedef struct account{
        char accountHolder[15];
        int accountNum;
        int balance;
   } ac;

int main(){

    ac rupesh = { "Rupesh" ,1234567,7654321};
    printf("\nAccount holder name : %s ",rupesh.accountHolder);
    printf("\nAccount number : %d",rupesh.accountNum);
    printf("\nAccount balance : %d Rs ",rupesh.balance);
    printf("\n");
    ac mohan = {"Mohan" ,877653,5778292};
    printf("\nAccount holder name : %s ",mohan.accountHolder);
    printf("\nAccount number : %d",mohan.accountNum);
    printf("\nAccount balance : %d Rs ",mohan.balance);

    return 0;
}