#include<stdio.h>
int static a=1;
int main()
{
    static a=1;
    {
        static int a=2;
        {
            static int a=3;
            {
                printf("%d",a);
            }
            printf("%d",a);
        }
        printf("%d",a);
    }
}
    
