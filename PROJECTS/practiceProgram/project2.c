#include<stdio.h>

struct employ{
    char name[12];
    char location[18];
    int age;
    int salary;
};
int main(){

    struct employ p[5];

    for(int i=0;i<5;i++){
        printf("Enter detail for employ %d\n",i+1);
        printf("Enter Name : ");
        scanf("%11s",p[i].name);
        printf("Enter location : ");
        scanf("%17s",p[i].location);
        printf("Enter age : ");
        scanf("%d",&p[i].age);
        printf("Enter salary : ");
        scanf("%d",&p[i].salary);
        
        printf("\n");
    }
        for(int i=0;i<5;i++){
            printf("\nEmploy %d ",i+1);
            printf("\nName : %s",p[i].name);
            printf("\nLocation : %s",p[i].location);
            printf("\nAge : %d",p[i].age);
            printf("\nSalary : %d",p[i].salary);
            printf("\n");
        }

    return 0;
}