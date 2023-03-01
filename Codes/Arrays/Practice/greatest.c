#include<stdio.h>
int main()
{
    int n,i,a[8],gtr,smlr;
    float sum=0,avg=0;
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    avg=sum/n;
    }
    printf("The sum is %d",sum);
    printf("The average is %d",avg);

    gtr=smlr=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>gtr)
        gtr=a[i];
        if(a[i]<smlr)
        smlr=a[i];
    }
    printf("\n the greater is %d",a[i]);
    printf("\n the smaller is %d",a[i]);
    return 0;
}