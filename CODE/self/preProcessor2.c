#include<stdio.h>

void hello(void);
void sir(void);

#pragma startup hello
#pragma exit sir

int main(){
    char name[11];

    printf("Enter name : ");
    gets(name);
    return 0;
}
void hello(){
    printf("Hello Mr.");
}
void sir(){
    printf("\nGood morning");
}