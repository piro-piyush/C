#include<stdio.h>

int main(){
    int i,j,row,colm;

    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter  column : ");
    scanf("%d",&colm);

    int array1[row][colm], array2[row][colm];
    
    printf("\nEnter array 1 elements \n\n");
    for ( i = 0; i < row; i++){
        for( j = 0; j < colm; j++){
            printf("Enter [%d][%d]th elements : ",i,j);
            scanf("%d",&array1[i][j]);

        }
    }

    printf("\nEnter array 2 elements \n\n");
    for ( i = 0; i < row; i++){
        for( j = 0; j < colm; j++){
            printf("Enter [%d][%d]th elements : ",i,j);
            scanf("%d",&array2[i][j]);

        }
    }

    int sum[row][colm];

    
    for(i=0;i<row;i++){

        for(j=0;j<colm;j++){
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    printf("\n[");
    for ( i = 0; i < row; i++){
        for( j = 0; j < colm; j++){
            if(j+1==colm){
            printf(" %d ",sum[i][j]);
                if(i+1!=row){
                printf("\n");
                }
                else
                printf("]");
            }
            else 
            printf(" %d,",sum[i][j]);

        }   
    }
    

    return 0;
}