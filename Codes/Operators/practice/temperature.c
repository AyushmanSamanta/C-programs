#include<stdio.h>
int main()
{
    int wed_t,mon_t=30,tue_t=27;
    printf("Enter the temperature:");
    scanf("%d",&wed_t);
    if(wed_t > mon_t )
    {
        printf("Wed is hotter than Mon and Tues.\n");
    }
    else if(mon_t > wed_t && tue_t < wed_t)
    {
        printf("Wed is cooler than Mon but hotter than tues.");
    }
    else
    {
        printf("Mon and Tues are hotter");
    }
}