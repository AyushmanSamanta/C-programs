#include<stdio.h>
int main()
{
    char _,a,e,i,o,u;
    printf("Enter a letter:");
    scanf("%c",&_);
    if(_==a || _==e || _==i || _==o || _==u )
    {
        printf("It is a vowel %c",_);
    }
    else
    {
        printf("It is a consonant %c",_);
    }
    return 0;
}