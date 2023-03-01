#include<stdio.h>
#include<string.h>
int main()
{ 
    char s[20], 
    count; 
    printf("\n Enter a string:");
     gets(s);
     for(int i=0; i<=s[i]; i++)
     {
        if(s[i]==' ')
        {
            count++;
        } 
    }
    printf("\n Total number of words is:%d", count+1);
    return 0;
}