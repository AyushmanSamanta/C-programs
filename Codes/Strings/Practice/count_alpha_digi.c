#include<stdio.h>
 
int main()
{
    char str[100];
    int i,a=0,d=0,s=0;
    printf("\n Enter The String : ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            a++;
        else if (str[i]>=48 && str[i]<=57)
            d++;
        else
            s++;
    }
    printf("\n Total Alphabets    : %d",a);
    printf("\n Total Digits       : %d",d);
    printf("\n Total Special      : %d",s);
    return 0;
}
