#include<stdio.h>
#include<stdlib.h>

int main(){

int i,n,sum=0,*ptr;

printf("Enter number of elements : ");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));

if(ptr==NULL){
    printf("Sorry unable to alocate memory");
    exit(0);
}
printf("\nEnter elements of array");

for(i=0;i<n;i++){
    printf("\nEnter %d element of array : ",i+1);
    scanf("%d",ptr+i);

    sum+=*(ptr+i);
}

printf("Sum = %d",sum);

free(ptr);

return 0;

}