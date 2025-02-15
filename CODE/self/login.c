#include<stdio.h>

int main(){
    int user,pass;
    printf("\t\tLogin Portal ");
    printf("\nEnter user id = ");
    scanf("%d",&user);
    if(user == 1114){
        printf("Enter pass = ");
        scanf("%d",&pass);
            if(pass == 2222){
                printf("Login granted");
            }
            else
                printf("Login rejected");
    }
    else
        printf("Wrong user-id");

    return 0;
}