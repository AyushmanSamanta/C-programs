#include<stdio.h>
int main()
{
    int pin=2222,user_pin;
    printf("Enter your pin:");
    scanf("%d",&user_pin);
    if(pin == user_pin)
    {
        printf("Access Granted");
    }
    else
    {
        printf("Access Denied");
    }
    return 0;
}