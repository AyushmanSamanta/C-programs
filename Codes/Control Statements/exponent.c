#include<stdio.h>
int main()
{
    int base,expo;
    float power=1;
    int i;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter exponent:");
    scanf("%d",&expo);
    for(i=expo;i<0;i++)
    {
        power=power/base;
    }
    for(i=expo;i>0;i--)
    {
        power=power*base;
    }
    printf("%d ^ %d= %f",base,expo,power);
    return 0;
}
