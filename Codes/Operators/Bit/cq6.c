#include<stdio.h>
int main()
{
    int i,j,a,count=0;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Binary of a given number is:\n");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        if(j==1){
            count ++;
        }
        printf("binary value: %d\n",j);
    }
    printf("number of ones is : %d\n",count);
    
    return 0;
}