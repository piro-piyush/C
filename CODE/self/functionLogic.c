#include<stdio.h>

void check(int x, int y, int z){
    if(x>y){
        if(x>z){
            printf(" %d is highest number",x);
        }
        else
            printf(" %d is highest number",z);
        }
    else{
        if(y>z){
            printf("\n%d is highest number",y);
        }
        else 
            printf("\n%d is highest number",z);

    }
}

int main(){
    int x,y,z;
    printf("Enter x , y , z : \n");
    scanf("%d %d %d",&x ,&y ,&z );
    check(x,y,z);
    check(5,6,4);
    check(6,9,2);
    check(22,44,65);

    return 0;
}