#include<stdio.h>
#include<string.h>

int main(){
    int i,j,len;
    char word[]="COBOL";

    len=strlen(word);
    // printf("%d",len);

    for(i=0;i<len;i++){
        for(j=0;j<=i;j++){
            printf("%c ",word[j]);
        }
        printf("\n");
    }

    return 0;
}