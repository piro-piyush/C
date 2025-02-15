#include<stdio.h>
#include<string.h>

    typedef struct sudent{
        char name[12];
        int age;
    } stu;

    int cmp(stu, stu);

int main(){

    int flag;

    stu s1={"piyu",18}, s2={"piyu",19};
    flag=cmp(s1,s2);

    if(flag==0){
        printf("Stu are equal");
    }
    else  
        printf("Not equal");

        return 0;
}

int cmp(stu x, stu y)
{
    int flag1,flag2;
    flag1=strcmp(x.name,y.name);

    if(x.age==y.age){
        flag2=0;
    }
    else
        flag2=1;

    if(flag1==0 && flag2==0)
        return 0;
    else
        return flag1+flag2;

}