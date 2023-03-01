#include<stdio.h>
int num(int a)
{
    if(a%2==0)
    {       
     printf("%d is an even number", a);    
    }
    else   
    {        
        printf("%d is an odd number", a);    
    }
}
int main()
{   
    int a;    
    printf("enter the value of a:");   
    scanf("%d", &a);    
    num(a);    
    return 0;
}