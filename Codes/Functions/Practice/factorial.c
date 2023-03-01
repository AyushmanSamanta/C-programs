#include<stdio.h>
int fact()
{
    int n,i,res=0,j,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i;
        while(j>0)
        {
            fact=fact*j;
            j--;
        }
        res=res+(fact/i);
    }
    printf("%d",res);
}
int main()
{
    fact();
}