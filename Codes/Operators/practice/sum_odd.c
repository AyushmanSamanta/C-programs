#include<stdio.h>
int main()
{
    int j,num[5],total=0;
    printf("Enter the first number:");
    scanf("%d",&num[0]);
    printf("Enter the second number:");
    scanf("%d",&num[1]);
    printf("Enter the third number:");
    scanf("%d",&num[2]);
    printf("Enter the fourth number:");
    scanf("%d",&num[3]);
    printf("Enter the fifth number:");
    scanf("%d",&num[4]);
    for(j=0;j<5;j++){
        if((num[j]%2)!=0)
        {
            total+=num[j];
        }
    }
    printf("sum of all odd values:%d\n",total);
    return 0;
    }