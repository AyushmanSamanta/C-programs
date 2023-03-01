#include<stdio.h>
int main()
{
    int x;
    double res;
    printf("Enter a four digit number:");
    scanf("%d",&x);
    res=(((x+8)/3)%5)*5;
    printf("The result is:%.2lf",res);
    return 0;
}