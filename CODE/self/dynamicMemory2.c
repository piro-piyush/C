#include<stdio.h>
#include<stdlib.h>

int main(){

int i,n,n2,sum=0,*ptr;

printf("Enter number of elements : ");
scanf("%d",&n);

ptr=(int*)calloc(n,sizeof(int));

if(ptr==NULL){
    printf("Sorry unable to alocate memory");
    exit(0);
}

printf("Enter new size : ");
scanf("%d",&n2);

realloc(ptr,n2*sizeof(int));

printf("\nEnter elements of array");

for(i=0;i<n2;i++){
    printf("\nEnter %d element of array : ",i+1);
    scanf("%d",ptr+i);

    sum+=*(ptr+i);
}

printf("Sum = %d",sum);

free(ptr);

return 0;

}