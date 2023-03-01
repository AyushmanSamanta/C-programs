#include<stdio.h>
int main()
{
    int i,n,mul;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;++i)
    {
        mul=n*i;
    printf("Table is %d x %d is %d \n",n,i,mul);
    }
    return 0;
}