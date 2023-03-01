#include<stdio.h>
int main()
{
    int y,m,d;
    printf("Enter the Days:\n");
    scanf("%d",&d);
    y=d/365;
    m=(d-(y*365))/30;
    d=d-((y*365)+(m*30));
    printf("Years:%d \n",y);
    printf("Months:%d \n",m);
    printf("Days:%d \n",d);
    return 0;

}