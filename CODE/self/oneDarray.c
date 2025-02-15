#include<stdio.h>

int main(){
    int i;
    int size;
    printf("Enter size : ");
    scanf("%d",&size);

    int age[size];

    for(i=0;i<size;i++){
        printf("\n%d.Enter value : ",i);
        scanf("%d",&age[i]);
    }

    for(i=0;i<size;i++){
        printf("\n%d.Value = %d",i,age[i]);
    }
    return 0;
}