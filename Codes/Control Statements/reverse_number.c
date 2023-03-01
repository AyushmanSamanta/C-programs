#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("Enter the number to be reversed:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    
    printf("Reverse number is:%d",rev);
    return 0;
}