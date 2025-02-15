#include<stdio.h>

struct vector sumvector(struct vector, struct vector);

struct vector{
    int i;
    int j;
};

int main(){
    struct vector p1,p2;

    printf("Enter value for vector 1");
    printf("\nEnter i value : ");   
    scanf("%d",&p1.i);
    printf("Enter value : ");
    scanf("%d",&p1.j);
    printf("\n");
    printf("Enter value for vector 2");
    printf("\nEnter i value : ");
    scanf("%d",&p2.i);
    printf("Enter j value : ");
    scanf("%d",&p2.j);


    printf("\n");
    printf("vector 1 is %di + %dj",p1.i,p1.j);
    printf("\nvector 2 is %di + %dj",p2.i,p2.j);


    struct vector result = sumvector(p1,p2);
    printf("\n\nResult vector is %di + %dj",result.i,result.j);

    return 0;
}
struct vector sumvector(struct  vector a, struct vector b){
    
    struct vector sum;
    sum.i=a.i+b.i;
    sum.j=a.j+b.j;
    
    return sum;
}