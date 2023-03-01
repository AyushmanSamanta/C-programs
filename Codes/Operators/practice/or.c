#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two numbers:");
    scanf("%d %d",&a,&b);
    if(a<50 || a<b)
    {
        printf("It is True");
    }
    else
    {
        printf("It is false");
    }
    return 0;
}