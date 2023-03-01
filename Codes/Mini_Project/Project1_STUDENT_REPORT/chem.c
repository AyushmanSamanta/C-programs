#include<stdio.h>
int chem(int c)
{
    if(c<=33)
    {
        printf("FAIL");
    }
    else if(c>=34 && c<=50)
    {
        printf("E");
    }
    else if(c>=51 && c<=60)
    {
        printf("D");
    }
    else if(c>=61 && c<=70)
    {
        printf("C");
    }
    else if(c>=71 && c<=80)
    {
        printf("B");
    }
    else if(c>=81 && c<=90)
    {
        printf("A");
    }
    else if(c>=91 && c<=100)
    {
        printf("O");
    }
    else
    {
        printf("invalid entry!\n");
    }
}
