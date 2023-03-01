#include<stdio.h>
int English(int e)
{
    if(e<=33)
    {
        printf("FAIL");
    }
    else if(e>=34 && e<=50)
    {
        printf("E");
    }
    else if(e>=51 && e<=60)
    {
        printf("D");
    }
    else if(e>=61 && e<=70)
    {
        printf("C");
    }
    else if(e>=71 && e<=80)
    {
        printf("B");
    }
    else if(e>=81 && e<=90)
    {
        printf("A");
    }
    else if(e>=91 && e<=100)
    {
        printf("O");
    }
    else
    {
        printf("invalid entry!\n");
    }
}
