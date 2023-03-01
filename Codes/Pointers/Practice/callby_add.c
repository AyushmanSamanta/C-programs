#include<stdio.h>
int add(int *a , int *b)
{ 
    return *a + *b;
}
int main()
{
    int a = 5 , b = 6;
    printf("sum of the two numbers:%d", add(&a , &b));
    return 0;
}
