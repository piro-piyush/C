#include<stdio.h>

int main(){
    int t1=0,t2=1,nexterm=0,term,i=0;

    printf("Enter the trms : ");
    scanf("%d",&term);

    // printf(" %d",t1);
    // printf(" %d",t2);

    nexterm=t1+t2;

    for(i=3;i<=term;i++){
        if(i==term){
          printf(" %d",nexterm);
        }
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    return 0;
}