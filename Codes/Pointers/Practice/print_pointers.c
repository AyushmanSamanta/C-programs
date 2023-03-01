#include<stdio.h>
int main()
{
    int *p[3];
    int i,a=5,b=10,c=15;
    p[0]=&a;
    p[1]=&b;
    p[3]=&c;

    for(i=0;i<3;i++)
    {
        printf("p[%d]=%d\n",i,*p[i]);
    }
    return 0;
}