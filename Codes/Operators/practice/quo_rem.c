#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a%b;
    printf("The quotient and remainder is %d %d",q,r);
    return 0;
}