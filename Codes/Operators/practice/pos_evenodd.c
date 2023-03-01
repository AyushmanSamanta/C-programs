#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer:");
    scanf("%d",&a);
    if(a==0)
        {
            printf("The Number is positive");
        }
        else if(a<0 && (a%2)!=0)
        {
            printf("The number is Negative odd");
        }
        else if(a<0 && (a%2)==0)
        {
            printf("The number is Negative even");
        }
        else if(a>0 && (a%2)!=0)
        {
            printf("The number is positive odd");
        }
        else if(a>0 && (a%2)==0)
        {
            printf("The number is positive Even\n");
        }
        return 0;

}