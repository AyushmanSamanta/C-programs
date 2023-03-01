#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    (a>b ? printf("True"):printf("False"));
    (a>=b ? printf("True"):printf("False"));
    (a<b ? printf("True"):printf("False"));
    (a<=b ? printf("True"):printf("False"));
    (a==b ? printf("True"):printf("False"));
    (a!=b ? printf("True"):printf("False"));
    return 0;
}