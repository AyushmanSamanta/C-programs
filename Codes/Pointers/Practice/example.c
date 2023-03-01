#include<stdio.h>
int main()
{
    int a=10;
    char b='a';
    float z=22.5;
    void *p;
    p=&a;
printf(" value:%d",*(int*)p);
p=&b;
printf(" value:%c",*(char*)p);
p=&z;
printf(" value:%f",*(float*)p);
}