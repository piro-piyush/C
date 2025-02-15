#include<stdio.h>

struct phone{
    int price;
    char name[12];
    char model[6];
};

int  main(){

    struct phone p[3];

    for(int i=0; i<3; i++){

            printf("\nPhone %d ",i+1);
            printf("\n\nEnter name : ");
            scanf("%11s",p[i].name);
            printf("Enter price : ");
            scanf("%d",&p[i].price);
            printf("Enter model name : ");
            scanf("%5s",p[i].model);
    }

    for (int i=0;i<3;i++)
    {
            
        printf("\n\nPhone %d ",i+1);
        printf("\nName : %s", p[i].name);
        printf("\nPrice : %d", p[i].price);
        printf("\nModel : %s", p[i].model);    
    }
    

    return 0;
}