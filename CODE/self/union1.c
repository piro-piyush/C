#include<stdio.h>

union student
{
    char name[12];
    char gender[6];
    int class;
};

int main(){

    union student s1;

    printf("\nEnter name : ");
    scanf("%11s",s1.name);
    s1.name[11]='\0';
    printf("\nEnter gender : ");
    scanf("%5s",s1.gender);
    s1.gender[5]='\0';
    printf("\nEnter class : ");
    scanf("%d",&s1.class);

    // printf("\nName : %11s",s1.name);
    // printf("\ngender : %5s",s1.gender);
    printf("\nClass : %d",s1.class);

    return 0;

}