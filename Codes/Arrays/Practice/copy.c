#include<stdio.h>
int main()
{
    int i,size,a[20],b[20];
    printf("Enter the size of array:");
    scanf("%d",&size);

    printf("Enter the elements of array :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    printf("Elements of second are:\n");
    for(i=0;i<size;i++)
    {
        printf("\n  b[%d]=%d",i,b[i]);
    }
    return 0;
}