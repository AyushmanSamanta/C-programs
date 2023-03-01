/* 1's Complement of a given Number*/

#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Binary of a given number is:\n");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 1;
        printf("binary value: %d\n",j);
    }
    printf("1's complement of given value\n");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 1;
        if(j==1)
        {
            j=0;
            printf("binary value: %d\n",j);
        }
        else
        {
            j=1;
            printf("binary value: %d\n",j);
        }
    }
    return 0;
}