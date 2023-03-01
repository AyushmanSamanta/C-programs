#include<stdio.h>
int count();
int main()
{
    count();
    count();
    count();
    count();
}
int count()
{
  int count=0;
    count++;
    printf("%d %d",count,&count);
    
}