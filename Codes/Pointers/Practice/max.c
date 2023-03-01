#include<stdio.h>
int main()
{
    int a=5,b=10;
    int *p1=&a;
    int *p2=&b;

    if(*p1 > *p2)
    {
        printf("Max is %d",*p1);
    }
    else
    {
        printf("Max is: %d ",*p2);
    }
    return 0;
}