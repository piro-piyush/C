#include<stdio.h>
#include<string.h>

void message(int id ){
        printf("\nHello User - %d ",id);
}

int main(){
    message(1234);
    message(32323);
    return 0;
}