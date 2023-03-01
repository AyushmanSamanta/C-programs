#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    ((a>b && a>c) ? printf("a is greater"):printf("a is smaller"));
    ((a<b && b>c) ? printf("b is greater"):printf("b is smaller"));
    ((a<c && b<c) ? printf("c is greater"):printf("c is smaller"));
    return 0;
}