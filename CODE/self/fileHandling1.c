#include<stdio.h>
#include<string.h>

int main(){
    FILE *p;
    char s[100];

    p=fopen("my.c","w");

    printf("Enter string : ");
    while(strlen(gets(s))>0){
        fputs(s,p);
    }
    fclose(p);

    p=fopen("my.c","r");

    if (p == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while(fgets(s,99,p)!=NULL)
        printf("%s",s);
        printf("\n");
    
    fclose(p);

    return 0;
}