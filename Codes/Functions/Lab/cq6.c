#include<stdio.h>
int add ();
int main()
{
     add();
}
int add()
{
    register int i;
    for(i=1;i<=10;i++)
    {
        printf("&d",&i);
    }

}

