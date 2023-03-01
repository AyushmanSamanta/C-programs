#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    max=a>b ? a:b;
    printf("larger of %d and %d is %d \n",a,b,max);
    
    return 0;
}