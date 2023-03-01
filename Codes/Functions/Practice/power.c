#include<stdio.h>
void power(int x,int y,int z);
int main()
{
    int x,y,z;
    printf("Enter st number:");
    scanf("%d",&x);
    printf("Enter nd number:");
    scanf("%d",&y);
    printf("Enter rd number:");
    scanf("%d",&z);
    power(x,y,z);
    return 0;
}
void power(int x,int y,int z)
{
    int ans=1,i;
    for(i=1;i<=(y+z);i++)
    ans=ans*x;
    printf("%d ^ (%d+%d)=%d",x,y,z,ans);
}