#include<stdio.h>
int main()
{
    int sum=0,a[5],i;
    printf("Enter the elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is:%d",sum);

    return 0;
}