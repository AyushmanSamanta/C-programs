#include<stdio.h>
int add(int *,int *);
int main()
{
    int a,b,*p,*q,sum;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    sum=add(&a,&b);
    printf("%d + %d = %d\n",a,b,sum);
    return 0;
}
int add(int *p,int *q)
{
    int sum;
    sum=*p+*q;
    return sum;
}