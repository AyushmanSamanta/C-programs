#include<stdio.h>
int main()
{
    int n,rev=0,rem,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(temp==rev)
    {
        printf("%d is palindrom",temp);
    }
    
    else
    {
    
        printf("%d is not palindrom",temp);
    }
    
    return 0;

}