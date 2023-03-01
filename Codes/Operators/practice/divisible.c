#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    if((a%b)==0){
    printf("Division possible");
    }
    else {
    printf("Division Not Possible");
    }
    return 0;
}