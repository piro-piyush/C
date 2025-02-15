#include<stdio.h>

int main(){
    int phy,chem,bio,math,comp;
    float totalmark,percentage;
    printf("Enter phy num = ");
    scanf("%d",&phy);
    printf("Enter chem num = ");
    scanf("%d",&chem);
    printf("Enter bio num = ");
    scanf("%d",&bio);
    printf("Enter math num = ");
    scanf("%d",&math);
    printf("Enter phy num = ");
    scanf("%d",&comp);

    totalmark=phy+chem+bio+math+comp;

    percentage=(totalmark/500)*100;
    printf("Percentage = %.2f\n",percentage);

    if(percentage>90){
        printf("Grade A");
    }
    else if(percentage>80){
        printf("Grade B");
    }
    else if(percentage>70){
        printf("Grade C");
    }
    else if(percentage>60){
        printf("Grade D");
    }
    else if(percentage>40){
        printf("\nGrade E");
    }
    else{
        printf("\nFail");
    }
    return 0;
}