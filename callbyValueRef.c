#include<stdio.h>

void swapByValue(int x,int y)
{    
    x=x+y;
    y=x-y;
    x=x-y;
}

void swapByReference(int *x, int *y)
{
    /*
    int z;
    z = *x;
    *x = *y;
    *y = z;*/
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

int main()
{
    int a=2,b=3;
    char name[]="HARISH";
    int len=0;
    swapByValue(a,b);
    printf("\n a:%d , b:%d ",a,b);
    swapByReference(&a,&b);
    printf("\n a:%d , b:%d ",a,b);

    while(name[len]!='\0')
    {
        len++;
    }
    printf("\n len:%d",len);
    return 0;
}