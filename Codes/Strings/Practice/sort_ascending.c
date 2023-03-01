#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], temp;
    int i, j, len;
    printf("Enter any string: ");
    scanf("%s",str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("\n Same string in ascending order:%s\n", str);
    
    return 0;
}