#include<stdio.h>
int main()
{  
    int T=26,n=0;
    int *ptr=&n; 
    for (int i=0;i<T;i++)
    {
        printf("%c ",*ptr+65+i); 
    }
}