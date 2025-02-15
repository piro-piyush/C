#include<stdio.h>

int main(){
    int i,sum=0;
    int num[]={23,56,43,66,14};
    int arraysize = sizeof(num)/sizeof(num[0]);
    printf("Array size : %d",arraysize);

    for(i=0;i<arraysize;i++){
        printf("\nArray : ");
        scanf("%d",&num[i]);
    }
     printf("\n{");
    for(i=0;i<arraysize;i++){
       if(i==arraysize-1){
        printf("%d",num[i]);
       }
       else 
        printf("%d,",num[i]);
        
    }
        printf("}");

        for(i=0;i<arraysize;i++){
            sum+=num[i];
        }
        printf("\n\nSum of array : %d",sum);
    return 0;
}




