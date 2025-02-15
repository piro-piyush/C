#include<stdio.h>
#define MARK 65

int main(){
    
    #if(MARK>=70)
        printf("\nDistinction");
    #elif((MARK>=60) && (MARK<70))
        printf("\nFirst class");
    #elif((MARK>=40) && (MARK<60))
        printf("\nSecond class");
    #else
        printf("Fail");
    #endif

    // #undef MARK
    //     printf("Mark : %d",MARK);

    return 0;
}