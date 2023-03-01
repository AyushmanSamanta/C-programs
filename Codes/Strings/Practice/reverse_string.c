#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp;
    int i,l,r,len;
    printf("Enter a string:");
    scanf("%s",&str);
    len=strlen(str);
    l=0;
    r=len-1;
    for(i=l;i<r;i++)
    {
        temp=str[i];
        str[i]=str[r];
        str[r]=temp;
        r--;
    }
    printf("The reverse is:%s",str);
}