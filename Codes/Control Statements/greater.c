#include<stdio.h>
int main()
{
    int a=8,b=10,c=7;
    if(a>b && a>c)
    {
        printf("a is the greater number.");
    }
    else if(b>a && b>c)
    {
        printf("b is the greater number");
    }
    else
    {
        printf("C is the greater number.");

    }
}