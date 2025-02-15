#include<stdio.h>

int main(){
    int userId,pass;
    while(1){

        //Taking user id
        printf("\nEnter id = ");
        scanf("%d",&userId);

        //checking user id
        if(userId == 1111){
            printf("\nUser id matched");

            //Taking password
            printf("\nEnter password = ");
            scanf("%d",&pass);

                //Checking password
                if(pass == 2222){
                    printf("Successfully Logged In");
                    return 0;
                }
                else
                    printf("Password wrong");
        }
        else{
            printf("Wrong User Id");
            printf("\nEnter again all details");
        }
    }
    return 0;
}