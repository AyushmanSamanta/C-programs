#include<stdio.h>
float interest(int p,float r,int n)
{
    float si;
    si=(p*r*n)/100.0;
    return si;
}
int main()
{
    int p,n,i;
    float r,z;
    for(i=1;i<=3;i++)
    {
        printf("Enter number:");
        scanf("%d",&i);
        printf("Enter principal amount:");
        scanf("%d",&p);
        printf("Enter the interest rate:");
        scanf("%f",&r);
        printf("Enter time period:");
        scanf("%d",&n);
        z=interest(p,r,n);
        printf("\n SI for set %d:%.2f\n",i,z);
    }
    return 0;
}