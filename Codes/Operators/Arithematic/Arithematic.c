/* program explains Arithematic operations
Usage: operators '+','-','*','/','%'
Syntax:operand<operator>operand */

#include<stdio.h>
int main()
{
    int a,b,sum,dif,mul,div,mod;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    dif=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("The sum is %d\n",sum);
    printf("The difference is %d\n",dif);
    printf("The multiply is %d\n",mul);
    printf("The division is %d\n",div);
    printf("The modulus is %d\n",mod);
    return 0;
}