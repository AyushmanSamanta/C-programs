#include<stdio.h>
static int count();
int main()
{
    count();
    count();
    count();
    count();
}
int count()
{
  static int count=0;
    count++;
    printf("%d %d",count,&count);
    
}