#include<stdio.h>
#include<string.h>

    typedef struct Time{
        int hours;
        int minute;
        int seconds;
    } t;

    int cmp(t, t);

int main(){

    int flag;

    t t1={ 9,7,8} , t2={ 9,7,8 };
    flag=cmp(t1,t2);

    if(flag==0){
        printf("Time is equal");
    }
    else
        printf("Time is not equal");

        return 0;
}

int cmp(t x, t y)
{
    if(x.hours==y.hours && x.minute==y.minute && x.seconds==y.seconds){
        return 0;
    }
    else
        return 1;

}