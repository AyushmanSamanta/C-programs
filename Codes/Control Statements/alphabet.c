#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf(" %c It is an Alphabet.",ch);
    }
    else
    {
        printf(" %c It is not an Alphabet.",ch);
    }
    return 0;
}