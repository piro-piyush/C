#include<stdio.h>

int main(){
    int x=10;
    void* p=&x;

    printf("\nValue of x : %d",x);
    printf("\nValue of x by ptr p : %d ",*(int*)(p));

    return 0;
}

//dengling pointr