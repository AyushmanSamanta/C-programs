#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int a,b,sum;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
     add(a,b);
     sub(a,b);
     mul(a,b);
     div(a,b);
}
int add(int a, int b)
{
    printf("sum is %d\n",a+b); 
}
int sub(int a,int b)
{
    printf("difference is %d\n",a-b);
}
int mul(int a, int b)
{
    printf("multiplt is %d\n",a*b); 
}
int div(int a, int b)
{
    printf("division is %d\n",a/b); 
}