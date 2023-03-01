#include<stdio.h>
int math(int m)
{
    if(m<=33)
    {
        printf("FAIL");
    }
    else if(m>=34 && m<=50)
    {
        printf("E");
    }
    else if(m>=51 && m<=60)
    {
        printf("D");
    }
    else if(m>=61 && m<=70)
    {
        printf("C");
    }
    else if(m>=71 && m<=80)
    {
        printf("B");
    }
    else if(m>=81 && m<=90)
    {
        printf("A");
    }
    else if(m>=91 && m<=100)
    {
        printf("O");
    }
    else
    {
        printf("invalid entry!\n");
    }
}
