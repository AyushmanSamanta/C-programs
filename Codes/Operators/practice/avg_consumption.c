#include<stdio.h>
int main()
{
    int dist,fuel;
    float avg;
    printf("Enter the total distance:");
    scanf("%d",&dist);
    printf("Enter the fuel spent:");
    scanf("%d",&fuel);
    avg=dist/fuel;
    printf("The Average consumption is:%.3f",avg);
    return 0;
}