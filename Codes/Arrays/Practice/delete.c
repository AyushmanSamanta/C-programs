#include<stdio.h>
int main()
{
    int a[10],pos,c,n;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements \n",n);
    for(c=0;c<n;c++)
    scanf("%d",&a[c]);
    printf("Enter the location of deletion:\n");
    scanf("%d",&pos);
    if(pos>=n+1)
    printf("deletion not possible");
    else
    {
        for(c=pos-1;c<n-1;c++)
        a[c]=a[c+1];
        printf("Result is:\n");
        for(c=0;c<n-1;c++)
        printf("%d\n",a[c]);
    }
    return 0;
}