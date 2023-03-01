#include<stdio.h>
long int binary(int num);
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    printf("Decimal=%d,Binary=%ld\n",num,binary(num));
    return 0;
}
long int binary(int num)
{
    long a=1,temp=0,rem;
    while(num>0)
    {
        rem=num%2;
        temp=temp+rem*a;
        num/=2;
        a*=10;
    }
    return temp;
}