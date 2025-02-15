#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER 10

void printlist(int num[], int size){
    printf("List of number : \n");
    for(int i = 0; i < size; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}


void deletevalue(int num[], int *size){
    int i, j;
    for(i = 0; i < *size; i++){
        for(j = i + 1; j < *size; j++){
            if(num[i] == num[j]){
                *size -= 1;
                num[j] = num[*size];
                j--;
            }
        }
    }
}

int main(){

    int num[MAX_NUMBER];
    int size = 0;
    int choice;


    printf("Enter a list of number (enter -1 for stop) \n");
    while(size < MAX_NUMBER){
        scanf("%d", &num[size]);
        if(num[size] == -1){
            break;
        }
        size++;
    }
    
    while(1){
        printf("\nMenu \n");
        printf("1. Print the list\n");
        printf("2. delete duplicates\n");
        printf("3. Quit\n");
        scanf("%d", &choice);


        switch(choice){
            case 1:
                printlist(num, size);
                break;
            case 2:
                deletevalue(num, &size);
                printf("Delete duplicate value!\n");
                break;
            case 3:
                exit(0);
                break;
        }
    }

return 0;
}
