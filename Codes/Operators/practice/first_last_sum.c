#include<stdio.h>
int main()
{
    int x,sum=0,first,last;
    printf("Enter a five digit number:");
    scanf("%d",&x);
    last=x%10;
    first=x;
    while(x>=10)
    {
        x=x/10;
    }
    first=x;
    sum=first+last;
    printf("sum is: %d",sum);
    return 0;
}