#include<stdio.h>
int main()
{
    int Id,wh;
    float salh,sal;
    printf("Enter the Employee Id:");
    scanf("%d",&Id);
    printf("Enter the Worked hours:");
    scanf("%d",&wh);
    printf("Enter the salary:");
    scanf("%f",&salh);
    sal=salh*wh;
    printf("The salary is:%.2f",sal);
    return 0;
}



