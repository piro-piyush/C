#include<stdio.h>

struct vactor{
    int i;
    int j;
};

int main(){
    struct vactor p1;

    printf("Enter i value : ");
    scanf("%d",&p1.i);
    printf("Enter j value : ");
    scanf("%d",&p1.j);


    printf("\n");
    printf("Vactor 1 is %di+%dj",p1.i,p1.j);


    return 0;

}