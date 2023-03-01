#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    if(a>b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    if((b%a)==0){
    printf("They are multiplied");
    }
    else {
    printf("Not multiplied");
    }
    return 0;
}