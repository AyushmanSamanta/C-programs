#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Binary of a given number is:\n");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;

        if(i==3 && j==0)
        {
            printf("OFF");
        }
    }
    return 0;
}