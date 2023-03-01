#include<stdio.h>
int main()
{
    int a=100;
    int *p;
    int **q;
    p = &a;
    q = &p;
    printf("Value of original variable: %d \n",a);
    printf("Value of pointer: %d\n",p);
    printf("Value of pointer pointing to the variable: %d\n",*p);
    printf("Value of pointer pointing to the variable: %d\n",*p++);
    printf("Value of pointer pointing to the variable: %d\n",p);
    printf(" %d\n",*p--);
    printf(" %d\n",p);
    return 0;
}