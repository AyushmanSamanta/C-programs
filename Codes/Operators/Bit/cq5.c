#include<stdio.h>
int main()
{
    int i,j1,j2,a,b,j3;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Binary of a given number is:\n");
    for(i=7;i>=0;i--)
    {
        j1=(a>>i) & 0x1;
        j2=(b>>i) & 0x1;
        

        printf("position: %d \n",i);

        printf(" binary: %d %d \n",j1,j2);

        j3=j1 & j2;
        printf("The mul is %d \n",j3);

    }
    return 0;
}