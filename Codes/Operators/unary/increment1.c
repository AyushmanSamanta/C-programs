#include<stdio.h>
int main()
{
    int a=10;
    //printf("value of a:%d \n",a++);
    sizeof(a++);
    printf("%d \n",a);
}