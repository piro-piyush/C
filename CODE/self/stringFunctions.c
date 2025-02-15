/*String Functions*/


#include<stdio.h>
#include<string.h>

int main(){
    int len;
    char a[40], b[40];


    //strlen
    printf("\nEnter string :");
    gets(a);
    len = strlen(a);
    printf("\nThe length of string : %d",len);
    printf(".");

    //strcmp
    printf("\n\nEnter second string to be compared");
    printf("\nEnter string : ");
    gets(b);

    if(strcmp(a,b)==0){
        printf("\nBoth string are equal");
    }
    else
        printf("\nString are not equal");

    //strcat
    char c[10],d[10];
    printf("\nEnter strings to be concatenated ");
    printf("\nEnter first string : ");
    gets(c);
    printf("Enter second string : ");
    gets(d);

    strcat(c,d);

    printf("Concatenated strings : %s",c);

    //strupr
    char e[6];
    printf("\n\nEnter string to be used futher :");
    gets(e);
    printf("\n\nString : %s",e);
    printf("\nAfter using strupr function");

    strupr(e);
    printf("\n\nNew string : %s",e);

    //strlwr
    printf("\nAfter using strlwr function");
    strlwr(e);
    printf("\n\nNew string : %s",e);

    //strrev
    printf("\nAfter using strrev function");
    strrev(e);
    printf("\n\nNew string : %s",e);

    //strcpy
    printf("\nCopying string e to f");
    char f[10];
    strcpy(f,e);
    printf("\n\nNew string : %s",f);


    return 0;
}