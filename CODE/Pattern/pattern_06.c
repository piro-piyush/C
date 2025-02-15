//  Write a program to display the following 
// pattern : 

//1 2 3 4
//  5 6 7
//    8 9

#include<stdio.h>

int main(){
    int i,j,row=3;

    for(i=0;i<row;i++){
        for(j=0;j<i+1;j++){
            if(row+i%row==0){
                printf("%d ",j+row-i);
            }
            else if(i=1){
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}