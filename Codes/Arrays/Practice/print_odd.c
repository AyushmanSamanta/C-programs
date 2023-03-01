#include<stdio.h>
int main()
{
    int n,i,a[5];
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        printf("\n odd numbers are %d\n",a[i]);
    }
    return 0;
}