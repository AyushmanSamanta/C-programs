#include<stdio.h>
int main()
{
    int n,i,a[10],s1=0,s2=0;
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s1=s1+a[i];
        }
        else
        {
            s2=s2+a[i];
        }
    }
        printf("Sum of even number is:%d\n",s1);
        printf("Sum of odd number is:%d\n",s2);
    return 0;
}