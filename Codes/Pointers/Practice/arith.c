#include<stdio.h>
int add(int ,int );
int sub(int ,int );
int main()
{
    int res;
    int (*func)(int,int);
    func=&add;
    res=(*func)(50,70);
    printf("Value of add is %d\n",res);
    func=&sub;
    res=(*func)(30,20);
    printf("Value of sub is %d\n",res);
}
int add(int x,int y)
{
    return x + y;
}
int sub(int x,int y)
{
    return x - y;
}