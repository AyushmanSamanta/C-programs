#include<stdio.h>
int Bio(int b)
{
    if(b<=33)
    {
        printf("FAIL");
    }
    else if(b>=34 && b<=50)
    {
        printf("E");
    }
    else if(b>=51 && b<=60)
    {
        printf("D");
    }
    else if(b>=61 && b<=70)
    {
        printf("C");
    }
    else if(b>=71 && b<=80)
    {
        printf("B");
    }
    else if(b>=81 && b<=90)
    {
        printf("A");
    }
    else if(b>=91 && b<=100)
    {
        printf("O");
    }
    else
    {
        printf("invalid entry!\n");
    }
}
