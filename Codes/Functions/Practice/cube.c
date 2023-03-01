#include<stdio.h>
int cube(int a);
int main()
{
    int a;
    printf("Enter the side of a cube:");
    scanf("%d",&a);
    cube(a);
}
int cube(a)
{
    printf("cube is %d",a*a*a);
}