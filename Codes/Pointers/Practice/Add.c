#include<stdio.h>
int main()
{
    int a=5,b=6,*p1,*p2,sum=0;
    p1=&a;
    p2=&b;
    printf("sum of two numbers is:%d",*p1 + *p2);
    return 0;
}