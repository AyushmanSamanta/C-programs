#include<stdio.h>
int main()
{
    int a,i,j,k,d,e;
    printf("Enter the value:");
    scanf("%d",&a);
    k=1<<6;
    printf("Binary form of a given number:\n");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 1;
        d=(k>>i) & 1;
        e=j^d;
        printf("%d",e);
    }
    return 0;
}