/* print Binary 0f 8-bit number*/
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

        printf("position:%d\n",i);

        printf("binary value: %d\n",j);
    }
    return 0;
}