#include<stdio.h>
#include<string.h>

int main(){
    char user[20];
    char pass[20];
    
    printf("\t \t \t \t \t \t ---INSTAGRAM--- \n");
    printf("\t \t \t \t \t \t   _Login_ \n");

    while(1){
        printf("User Name : ");
        scanf("%s",&user);
        if(strcmp(user, "admin" )== 0){
            while(1){
                printf("Password : ");
                scanf("%s",&pass);

                if(strcmp(pass, "1234") == 0){
                    printf("Login successfull \n");
                    printf("Welome Admin !! \n");
                    return 0;
                }
                else 
                    printf("Incorrect password \n Try again");

            }

        }
        else 
            printf("Enter correct username \n");

    }
    return 0;
}