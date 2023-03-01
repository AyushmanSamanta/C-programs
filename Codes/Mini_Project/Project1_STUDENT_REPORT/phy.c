#include<stdio.h>
int phy(int p)
{
    if(p<=33)
    {
        printf("FAIL");
    }
    else if(p>=34 && p<=50)
    {
        printf("E");
    }
    else if(p>=51 && p<=60)
    {
        printf("D");
    }
    else if(p>=61 && p<=70)
    {
        printf("C");
    }
    else if(p>=71 && p<=80)
    {
        printf("B");
    }
    else if(p>=81 && p<=90)
    {
        printf("A");
    }
    else if(p>=91 && p<=100)
    {
        printf("O");
    }
    else
    {
        printf("invalid entry!\n");
    }
}
