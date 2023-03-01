#include<stdio.h>
int main()
{
    int y,w,d;
    printf("Enter the Days:\n");
    scanf("%d",&d);
    y=d/365;
    w=(d-(y*365))/7;
    d=d-((y*365)+(w*7));
    printf("Years:%d \n",y);
    printf("Weeks:%d \n",w);
    printf("Days:%d \n",d);
    return 0;

}