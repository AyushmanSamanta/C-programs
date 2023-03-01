#include<stdio.h>
#include<math.h>
int main()
{
    int x,a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    x=(-b+-sqrt(b*b-4*a*c))/2*a;
    if(b*b-4*a*c > 0)
    {
        printf("Roots are real.");
    }
    else if(b*b-4*a*c<0)
    {
        printf("Roots are imaginary.");
    }
    else
    {
        printf("Roots are zeros.");
    }
    return 0;
}