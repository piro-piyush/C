#include<stdio.h>

int main(){
    int num;
    int i=1;
    printf("Enter value for printing table = ");
    scanf("%d",&num);

    while(i<=10){
        printf("%d X %d = %d\n",num,i,i*num);
        i++;

        
    }
    return 0;
}
