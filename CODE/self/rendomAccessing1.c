#include<stdio.h>

int main(){
    FILE *fp;
    int i;

    fp = fopen("my.html","r");
    for(i=1;i<=10;i++){
        printf("%c : %d\n",getc(fp),ftell(fp));
        fseek(fp,ftell(fp),0);
        if(i==5)
        rewind(fp);
    }
    fclose(fp);

    return 0;
}