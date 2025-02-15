#include<stdio.h>

void pattern();

int main(){

    pattern();
    return 0;
}
void pattern(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=i*2-1;j++)
        printf("  * ");
        printf("\n");
    }

}