#include<stdio.h>
int main()
{
    int a;
    printf("Enter a numbers:");
    scanf("%d",&a);
    (a%2==0 ? printf("The given number is even"):printf("The given number is odd"));
    return 0;
}