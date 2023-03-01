#include<stdio.h>
int main()
{
    int a[10],i,s1=0,s2=0;
    printf("Enter the elements:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        s1=s1+a[i];
    }
    printf("\nThe sum of 1st five elements is %d\n",s1);
    for(i=5;i<10;i++)
    {
        s2=s2+a[i];
    }
    printf("\nThe sum of last five elements is %d\n",s2);

    if(s1==s2)
    {
        printf("\nThe sum is equal\n");
    }
    else
    {
        printf("\nNot equal\n");
    }
    return 0;
}