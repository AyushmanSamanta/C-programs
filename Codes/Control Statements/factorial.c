#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of given number is %d",fact);

}