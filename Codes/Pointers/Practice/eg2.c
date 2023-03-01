#include<stdio.h>
int main()
{
    int i,a[10]={1,2,3,4,5,6,7,8,9},*p;
    p = &a;
    for(i=0;i<=10;i++)
    {
        printf("\n %d \n",a[i]);

    }
    for(i=0;i<=10;i++)
    {
        printf("%d",*(p+i),(p+i));
    }
    return 0;
}