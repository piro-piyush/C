#include<stdio.h>

struct student{
    char name[12];
    int class[6];
    char gendar[6];

};

int main(){
    struct student s[4];

    for(int i=0; i<4; i++){
        printf("\nStudent %d" ,i+1);
        printf("\nEnter student name : ");
        scanf("%s",&s[i].name);
        printf("\nEnter student class : ");
        scanf("%d",&s[i].class);
        printf("\nEnter student gendar : ");
        scanf("%s",&s[i].gendar);
    }

    for(int i=0; i<4; i++){
        printf("\n\nStudent %d" ,i+1);
        printf("\nName : %s",s[i].name);
        printf("\nClass : %d",s[i].class);
        printf("\nGendar : %s",s[i].gendar);
    }

    return 0;
}