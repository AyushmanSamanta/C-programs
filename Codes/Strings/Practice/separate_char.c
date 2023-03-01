#include<stdio.h>
#include<string.h>
int main()
{
    char strng[20]="welcome";
    int i;
    printf("Individual character from string:\n");
    for(i=0;i<strlen(strng);i++)
    {
        printf("%c\t",strng[i]);
    }
    return 0;
}