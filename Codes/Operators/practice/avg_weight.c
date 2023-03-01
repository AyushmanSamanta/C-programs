#include<stdio.h>
int main()
{
    double I1,W1,I2,W2,Avg;
    printf("Weight of Item-1:");
    scanf("%lf",&W1);
    printf("Number of Item-1:");
    scanf("%lf",&I1);
     printf("Weight of Item-2:");
    scanf("%lf",&W2);
    printf("Number of Item-2:");
    scanf("%lf",&I2);
    Avg=((W1*I1)+(W2*I2))/(I1+I2);
    printf("The Avg is:%lf",Avg);
    return 0;
}