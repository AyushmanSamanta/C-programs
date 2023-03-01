#include<stdio.h>
int main()
{
    int a[10],i,s,pos,val;
    printf("Enter size:");
    scanf("%d",&s);
    printf("Enter the array:\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to insert:\n");
    scanf("%d",&pos);
    printf("Enter the value to be inserted:\n");
    scanf("%d",&val);
    for(i<s-1;i<pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    printf("Final array is ");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}