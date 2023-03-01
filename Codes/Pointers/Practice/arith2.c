#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x,int y)
{
    return x * y;
}
int div(int x,int y)
{
    return x / y;
}
int mod(int x,int y)
{
    return x % y;
}
int main()
{
    int res,a;
    int (*func)(int, int);
    printf("Enter the choice\n");
    scanf("%c",&a);

    if(a=='+')
    {
        func = &add;
        res = (*func)(50, 70);
        printf("Value of add is %d\n", res);


    }
    else if(a=='-')
    {
        func = &sub;
        res = (*func)(30, 20);
        printf("Value of sub is %d\n", res);

    }
     else if(a=='*')
    {
        func = &mul;
        res = (*func)(30, 20);
        printf("Value of mul is %d\n", res);
    }
     else if(a=='/')
    {
        func = &div;
        res = (*func)(30, 20);
        printf("Value of div is %d\n", res);
    }
    else
    {
        func=&mod;
        res=(*func)(30,20);
        printf("Value of mod is %d\n",res);
    }
}

