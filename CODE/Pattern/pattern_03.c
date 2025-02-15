#include<stdio.h>
int main(){
    int i,j=0;
    
    for(i=0;i<5;i++){
        while(i>=j){
            printf(" * ");
            j++;
        }
        printf("\n");
        j=0;
    }
    return 0;
}
