#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("The number is Negative");
    }
    else if(a>0)
    {
        printf("The number is Positive");
    }
    else
    {
        printf("It is Zero");
    }
    return 0;
}