#include<stdio.h>
int main()
{
    int n,i,a[8],large,small;
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        large=a[i];

        if(a[i]<small)
        small=a[i];
    }
    printf("\n The larger is %d",large);
    printf("\n The small is %d",small);
}