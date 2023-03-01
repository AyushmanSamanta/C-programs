#include<stdio.h>
int swap(int *a,int *b,int *c);
int main()
{
    int a=5,b=6,c=7;
    swap(&a,&b,&c);
    printf("After Swapping:%d %d %d", a,b,c);
    return 0;
}
int swap(int *n1 , int *n2 , int *n3)
{
    int temp;

    temp=*n2;
    *n2=*n1;
    *n1=*n3;
    *n3=temp;
}
