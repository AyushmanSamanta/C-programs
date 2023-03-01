#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number is positive.");
    }
    else if(a<0)
    {
        printf("The number is Negative.");
    }
    else
    {
        printf("zero.");
    }
    return 0;
}