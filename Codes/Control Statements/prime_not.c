#include<stdio.h>
int main()
{
    int a,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&a);
    
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            printf("%d is not a prime",a);
            flag=1;
            break;
        }
    }
    
    if(flag==0)
    {
        printf("%d is a prime number",a);
    }

}