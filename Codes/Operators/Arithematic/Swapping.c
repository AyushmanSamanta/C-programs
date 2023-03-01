/*Swapping two numbers without using third variable
usage:Arithematic operators*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swapping:%d %d",a,b);
    return 0;
}